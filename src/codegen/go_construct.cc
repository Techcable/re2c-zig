#include <stddef.h>
#include "src/util/c99_stdint.h"

#include "src/adfa/action.h"
#include "src/adfa/adfa.h"
#include "src/codegen/bitmap.h"
#include "src/codegen/go.h"
#include "src/options/opt.h"
#include "src/debug/debug.h"
#include "src/dfa/tcmd.h"
#include "src/util/allocate.h"


namespace re2c {

static uint32_t unmap(Span*, const Span*, uint32_t, const State*);

bool consume(const State *s)
{
    switch (s->action.type) {
        case Action::RULE:
        case Action::MOVE:
        case Action::ACCEPT:
            return false;
        case Action::MATCH:
        case Action::INITIAL:
        case Action::SAVE:
            return true;
    }
    // unreachable
    DASSERT(false);
    return true;
}

static bool is_eof(uint32_t eof, uint32_t ub)
{
    return eof != NOEOF && eof + 1 == ub;
}

CodeGoCases *code_gocases(code_alc_t &alc, const Span *spans, uint32_t nspans,
    bool skip, uint32_t eof)
{
    CodeGoCases *go = alc.alloct<CodeGoCases>(1);
    go->cases = alc.alloct<CodeGoCase>(nspans);

    uint32_t *ranges = alc.alloct<uint32_t>(nspans * 2), *range = ranges;
    CodeGoCase *cases = go->cases, *c;
    const Span *span = spans, *endspan = span + nspans, *s;

    for (; span < endspan; ++span) {
        State *to          = span->to;
        const tcid_t tags  = span->tags;
        const bool eofcase = is_eof(eof, span->ub);

        // look for an existing case with the same destination state and tags
        for (c = go->cases; c < cases; ++c) {
            if (c->to == to && c->tags == tags) break;
        }

        if (c == cases) {
            // no such case found, add a new case
            ++cases;

            to->label->used = true;
            c->to     = to;
            c->tags   = span->tags;
            c->skip   = skip && consume(to);
            c->eof    = eofcase;
            c->ranges = range;

            // add the current range
            *range++ = span == spans ? 0 : (span - 1)->ub;
            *range++ = span->ub;

            // go over the remaining spans and for all spans that have the same
            // destination state and tags, add their range to the current range
            for (s = span + 1; s < endspan; ++s) {
                if (s->to == to && s->tags == tags) {
                    *range++ = (s - 1)->ub;
                    *range++ = s->ub;
                }
            }

            c->nranges = static_cast<uint32_t>(range - c->ranges) / 2;
        }
        else {
            // found a case that already contains this range
            c->eof |= eofcase;
        }
    }

    DASSERT(range - ranges == 2 * nspans);
    go->ncases = static_cast<uint32_t>(cases - go->cases);

    // find default case
    DASSERT(nspans > 0);
    State *defstate = (endspan - 1)->to;
    for (c = go->cases; c < cases; ++c) {
        if (c->to == defstate) {
            go->defcase = c;
            break;
        }
    }

    return go;
}

CodeCmp *code_cmp(code_alc_t &alc, const char *cmp, uint32_t val)
{
    CodeCmp *x = alc.alloct<CodeCmp>(1);
    x->cmp = cmp;
    x->val = val;
    return x;
}

CodeGoIfB *code_goifb(code_alc_t &alc, const Span *s, uint32_t n, State *next,
    bool skip, uint32_t eof)
{
    const uint32_t l = n / 2;
    const uint32_t h = n - l;
    CodeGoIf::Kind tkind = l > 4 ? CodeGoIf::BINARY : CodeGoIf::LINEAR;
    CodeGoIf::Kind ekind = h > 4 ? CodeGoIf::BINARY : CodeGoIf::LINEAR;

    CodeGoIfB *x = alc.alloct<CodeGoIfB>(1);
    x->cond = code_cmp(alc, "<=", s[l - 1].ub - 1);
    x->gothen = code_goif(alc, tkind, &s[0], l, next, skip, eof);
    x->goelse = code_goif(alc, ekind, &s[l], h, next, skip, eof);
    return x;
}

static void add_branch(CodeGoIfL *go, const CodeCmp *cond, State *to,
    const Span &sp, bool skip, uint32_t eof)
{
    CodeGoIfL::Branch &b = go->branches[go->nbranches++];
    b.cond = cond;
    b.to = to;
    if (to) to->label->used = true;
    b.tags = sp.tags;
    b.skip = skip && consume(sp.to);
    b.eof = is_eof(eof, sp.ub);
}

CodeGoIfL *code_goifl(code_alc_t &alc, const Span *s, uint32_t n, State *next,
    bool skip, uint32_t eof)
{
    CodeGoIfL *x = alc.alloct<CodeGoIfL>(1);
    x->nbranches = 0;
    x->branches = alc.alloct<CodeGoIfL::Branch>(n);
    x->def = eof == NOEOF ? NULL : next;

    for (;;) {
        if (n == 1 && s[0].to == next) {
            add_branch(x, NULL, NULL, s[0], skip, eof);
            break;
        }
        else if (n == 1) {
            add_branch(x, NULL, s[0].to, s[0], skip, eof);
            break;
        }
        else if (n == 2 && s[0].to == next) {
            CodeCmp *cmp = code_cmp(alc, ">=", s[0].ub);
            add_branch(x, cmp, s[1].to, s[1], skip, eof);
            add_branch(x, NULL, NULL, s[0], skip, eof);
            break;
        }
        else if (n == 3
                && s[1].to == next
                && s[1].ub - s[0].ub == 1
                && s[2].to == s[0].to
                && s[2].tags == s[0].tags) {
            CodeCmp *cmp = code_cmp(alc, "!=", s[0].ub);
            add_branch(x, cmp, s[0].to, s[0], skip, eof);
            add_branch(x, NULL, NULL, s[1], skip, eof);
            break;
        }
        else if (n >= 3
                && s[1].ub - s[0].ub == 1
                && s[2].to == s[0].to
                && s[2].tags == s[0].tags) {
            CodeCmp *cmp = code_cmp(alc, "==", s[0].ub);
            add_branch(x, cmp, s[1].to, s[1], skip, eof);
            n -= 2;
            s += 2;
        }
        else {
            CodeCmp *cmp = code_cmp(alc, "<=", s[0].ub - 1);
            add_branch(x, cmp, s[0].to, s[0], skip, eof);
            n -= 1;
            s += 1;
        }
    }

    return x;
}

CodeGoIf *code_goif(code_alc_t &alc, CodeGoIf::Kind kind, const Span *sp,
    uint32_t nsp, State *next, bool skip, uint32_t eof)
{
    CodeGoIf *x = alc.alloct<CodeGoIf>(1);
    x->kind = kind;
    if (kind == CodeGoIf::BINARY) {
        x->goifb = code_goifb(alc, sp, nsp, next, skip, eof);
    }
    else {
        x->goifl = code_goifl(alc, sp, nsp, next, skip, eof);
    }
    return x;
}

CodeGoSwIf *code_goswif(code_alc_t &alc, const Span *sp, uint32_t nsp,
    State *next, bool sflag, bool skip, uint32_t eof)
{
    CodeGoSwIf *x = alc.alloct<CodeGoSwIf>(1);
    if ((!sflag && nsp > 2)
            || (nsp > 8 && (sp[nsp - 2].ub - sp[0].ub <= 3 * (nsp - 2)))) {
        x->kind = CodeGoSwIf::SWITCH;
        x->gosw = code_gocases(alc, sp, nsp, skip, eof);
    }
    else if (nsp > 5) {
        x->kind = CodeGoSwIf::IF;
        x->goif = code_goif(alc, CodeGoIf::BINARY, sp, nsp, next, skip, eof);
    }
    else {
        x->kind = CodeGoSwIf::IF;
        x->goif = code_goif(alc, CodeGoIf::LINEAR, sp, nsp, next, skip, eof);
    }
    return x;
}

CodeGoBm *code_gobm(code_alc_t &alc, const Span *span, uint32_t nSpans,
    const Span *hspan, uint32_t hSpans, const bitmap_t *bm, State *bm_state,
    State *next, bool sflag, uint32_t eof)
{
    CodeGoBm *x = alc.alloct<CodeGoBm>(1);
    x->bitmap = bm;
    x->bitmap_state = bm_state;
    x->hgo = NULL;
    x->lgo = NULL;

    Span *bspan = allocate<Span>(nSpans); // temporary
    uint32_t bSpans = unmap (bspan, span, nSpans, bm_state);
    x->lgo = bSpans == 0 ? NULL
        : code_goswif(alc, bspan, bSpans, next, sflag, false, eof);
    // if there are any low spans, then next state for high spans
    // must be NULL to trigger explicit goto generation in linear 'if'
    x->hgo = hSpans == 0 ? NULL
        : code_goswif(alc, hspan, hSpans, x->lgo ? NULL : next, sflag, false, eof);
    x->bitmap_state->label->used = true;
    operator delete(bspan);

    return x;
}

const uint32_t CodeGoCpTable::TABLE_SIZE = 0x100;

CodeGoCpTable *code_gocp_table(code_alc_t &alc, const Span * span, uint32_t nSpans)
{
    CodeGoCpTable *x = alc.alloct<CodeGoCpTable>(1);
    x->table = alc.alloct<State*>(CodeGoCpTable::TABLE_SIZE);

    uint32_t c = 0;
    for (uint32_t i = 0; i < nSpans; ++i) {
        for(; c < span[i].ub && c < CodeGoCpTable::TABLE_SIZE; ++c) {
            State *to = span[i].to;
            x->table[c] = to;
            to->label->used = true;
        }
    }

    return x;
}

CodeGoCp *code_gocp(code_alc_t &alc, const Span *span, uint32_t nSpans,
    const Span *hspan, uint32_t hSpans, State *next, bool sflag, uint32_t eof)
{
    CodeGoCp *x = alc.alloct<CodeGoCp>(1);
    x->hgo = hSpans == 0 ? NULL
        : code_goswif(alc, hspan, hSpans, next, sflag, false, eof);
    x->table = code_gocp_table(alc, span, nSpans);
    return x;
}

CodeGoDot *code_godot(code_alc_t &alc, const Span *sp, uint32_t nsp, uint32_t eof)
{
    CodeGoDot *x = alc.alloct<CodeGoDot>(1);
    x->cases = code_gocases(alc, sp, nsp, false, eof);
    return x;
}

void init_go(CodeGo *go)
{
    go->kind = CodeGo::EMPTY;
    go->nSpans = 0;
    go->span = NULL;
    go->tags = TCID0;
    go->skip = false;
}

void code_go(code_alc_t &alc, CodeGo *go, const State *from, const opt_t *opts,
    bitmaps_t &bitmaps)
{
    if (go->nSpans == 0) return;

    if (opts->stadfa) {
        DASSERT(go->tags == TCID0);
        go->tags = from->stadfa_tags;
    }

    Span *span = go->span;

    // initialize high (wide) spans
    uint32_t hSpans = 0;
    const Span *hspan = NULL;
    for (uint32_t i = 0; i < go->nSpans; ++i) {
        if (span[i].ub > 0x100) {
            hspan = &go->span[i];
            hSpans = go->nSpans - i;
            break;
        }
    }

    bool low_spans_have_tags = false;
    for (uint32_t i = 0; i < go->nSpans - hSpans; ++i) {
        if (go->span[i].tags != TCID0) {
            low_spans_have_tags = true;
            break;
        }
    }

    // initialize bitmaps
    uint32_t nBitmaps = 0;
    const bitmap_t *bm = NULL;
    State *bms = NULL;

    for (uint32_t i = 0; i < go->nSpans; ++i) {
        State *s = go->span[i].to;
        if (!s->isBase) continue;

        const bitmap_t *b = bitmaps.find(go, s);
        if (b) {
            if (bm == NULL) {
                bm = b;
                bms = s;
            }
            ++nBitmaps;
        }
    }

    // only do EOF check in states that dispatch on symbol
    const uint32_t eof = from->go.nSpans == 1 && !consume(from->go.span[0].to)
        ? NOEOF : opts->eof;
    const uint32_t dSpans = go->nSpans - hSpans - nBitmaps;
    const bool part_skip = opts->eager_skip && !go->skip;

    if (opts->target == TARGET_DOT) {
        go->kind = CodeGo::DOT;
        go->godot = code_godot(alc, go->span, go->nSpans, eof);
    }
    else if (opts->gFlag
            && !part_skip
            && dSpans >= opts->cGotoThreshold
            && !low_spans_have_tags) {
        go->kind = CodeGo::CPGOTO;
        go->gocp = code_gocp(alc, go->span, go->nSpans, hspan, hSpans, from->next,
            opts->sFlag, eof);
    }
    else if (opts->bFlag && !part_skip && nBitmaps > 0) {
        go->kind = CodeGo::BITMAP;
        go->gobm = code_gobm(alc, go->span, go->nSpans, hspan, hSpans, bm, bms,
            from->next, opts->sFlag, eof);
        bitmaps.used = true;
    }
    else {
        go->kind = CodeGo::SWITCH_IF;
        go->goswif = code_goswif(alc, go->span, go->nSpans, from->next, opts->sFlag,
            part_skip, eof);
    }
}

// Find all spans that map to the given state. For each of them find upper adjacent span
// that maps to another state (if any, otherwize try the lower one). If the input contains
// a single span that maps to the given state, then the output contains zero spans.
uint32_t unmap(Span *new_span, const Span *old_span, uint32_t old_nspans, const State *x)
{
    uint32_t new_nspans = 0;
    for (uint32_t i = 0; i < old_nspans; ++i) {
        if (old_span[i].to != x) {
            if (new_nspans > 0
                && new_span[new_nspans - 1].to == old_span[i].to
                && new_span[new_nspans - 1].tags == old_span[i].tags) {
                new_span[new_nspans - 1].ub = old_span[i].ub;
            }
            else {
                new_span[new_nspans].to = old_span[i].to;
                new_span[new_nspans].ub = old_span[i].ub;
                new_span[new_nspans].tags = old_span[i].tags;
                ++new_nspans;
            }
        }
    }
    if (new_nspans > 0) {
        new_span[new_nspans - 1].ub = old_span[old_nspans - 1].ub;
    }
    return new_nspans;
}

} // namespace re2c
