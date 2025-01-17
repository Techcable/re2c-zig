// re2rust $INPUT -o $OUTPUT
const std = @import("std");
const expectEqual = std.testing.expectEqual;

const SemVer = struct {
    major: u32,
    minor: u32,
    patch: u32,
};

fn s2n(str: []const u8) u32 { // convert a pre-parsed string to a number
    var n: u32 = 0;
    for (str) |i| { n = n * 10 + @as(u32, i) - 48; }
    return n;
}

fn parse(str: [:0]const u8) ?SemVer {
    var cur: u32 = 0;
    var mar: u32 = 0;

    // User-defined tag variables that are available in semantic action.
    var t1: usize = undefined;
    var t2: usize = undefined;
    var t3: usize = undefined;
    var t4: usize = undefined;
    var t5: usize = undefined;

    // Autogenerated tag variables used by the lexer to track tag values.
    const NONE: usize = std.math.maxInt(usize);
    /*!stags:re2c format = 'var @@{tag} = NONE;'; */

    /*!re2c
        re2c:define:YYCTYPE     = u8;
        re2c:define:YYPEEK      = "str[cur]";
        re2c:define:YYSKIP      = "cur += 1;";
        re2c:define:YYBACKUP    = "mar = cur;";
        re2c:define:YYRESTORE   = "cur = mar;";
        re2c:define:YYSTAGP     = "@@{tag} = cur;";
        re2c:define:YYSTAGN     = "@@{tag} = NONE;";
        re2c:define:YYSHIFTSTAG = "@@{tag} -= @bitCast(usize, @as(isize, -@@{shift}));";
        re2c:yyfill:enable = 0;
        re2c:tags = 1;

        num = [0-9]+;

        @t1 num @t2 "." @t3 num @t4 ("." @t5 num)? [\x00] {
            const major = s2n(str[t1..t2]);
            const minor = s2n(str[t3..t4]);
            const patch = if (t5 != NONE) s2n(str[t5..cur - 1]) else 0;
            return SemVer { .major = major, .minor = minor, .patch = patch };
        }
        * { return null; }
    */
}

test "semver parser" {
    try expectEqual(parse("23.34"), SemVer { .major = 23, .minor = 34, .patch = 0 });
    try expectEqual(parse("1.2.99999"), SemVer { .major = 1, .minor = 2, .patch = 99999 });
    try expectEqual(parse("1.a"), null);
}
