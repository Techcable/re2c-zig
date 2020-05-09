/* Generated by re2c */
//line "golang/005_stags_decorate.--lang(go).re":1
package main

type YYCTYPE byte
type Input struct {
	data   []YYCTYPE
	cursor int
	marker int
	yyt1 int
	yyt2 int
	yyt3 int
}

func peek(in *Input) func() YYCTYPE {
	return func() YYCTYPE {
		return in.data[in.cursor]
	}
}

func skip(in *Input) func() {
	return func() {
		in.cursor++
	}
}

func backup(in *Input) func() {
	return func() {
		in.marker = in.cursor
	}
}

func restore(in *Input) func() {
	return func() {
		in.cursor = in.marker
	}
}

func stagp(in *Input) func(tag *int) {
	return func(tag *int) {
		*tag = in.cursor
	}
}

func stagn(tag *int) {
	*tag = -1
}

func Lex(str string) (int, int, int) {
	in := &Input{
		data:   []YYCTYPE(str),
		cursor: 0,
	}
	YYPEEK := peek(in)
	YYSKIP := skip(in)
	YYBACKUP := backup(in)
	YYRESTORE := restore(in)
	YYSTAGP := stagp(in)
	YYSTAGN := stagn
	var a, b, c *int

	
//line "golang/005_stags_decorate.--lang(go).go":64
{
	var yych YYCTYPE
	yych = YYPEEK ()
	switch (yych) {
	case 0x00:
		YYSTAGN (&in.yyt1)
		YYSTAGN (&in.yyt2)
		YYSTAGN (&in.yyt3)
		goto yy2
	case 'a':
		YYSTAGP (&in.yyt1)
		goto yy6
	case 'b':
		YYSTAGP (&in.yyt2)
		goto yy7
	case 'c':
		YYSTAGP (&in.yyt3)
		goto yy8
	default:
		goto yy4
	}
yy2:
	YYSKIP ()
	a = &in.yyt1
	b = &in.yyt2
	c = &in.yyt3
//line "golang/005_stags_decorate.--lang(go).re":81
	{
		return *a, *b, *c
	}
//line "golang/005_stags_decorate.--lang(go).go":95
yy4:
	YYSKIP ()
yy5:
//line "golang/005_stags_decorate.--lang(go).re":69
	{
		return -2, -2, -2
	}
//line "golang/005_stags_decorate.--lang(go).go":103
yy6:
	YYSKIP ()
	YYBACKUP ()
	yych = YYPEEK ()
	switch (yych) {
	case 0x00:
		YYSTAGN (&in.yyt2)
		YYSTAGN (&in.yyt3)
		goto yy9
	case 'a':
		goto yy11
	case 'b':
		YYSTAGP (&in.yyt2)
		goto yy14
	case 'c':
		YYSTAGN (&in.yyt2)
		YYSTAGP (&in.yyt3)
		goto yy15
	default:
		goto yy5
	}
yy7:
	YYSKIP ()
	YYBACKUP ()
	yych = YYPEEK ()
	switch (yych) {
	case 0x00:
		YYSTAGN (&in.yyt1)
		YYSTAGN (&in.yyt3)
		goto yy9
	case 'b':
		goto yy16
	default:
		goto yy5
	}
yy8:
	YYSKIP ()
	YYBACKUP ()
	yych = YYPEEK ()
	switch (yych) {
	case 0x00:
		YYSTAGN (&in.yyt1)
		YYSTAGN (&in.yyt2)
		goto yy9
	case 'c':
		goto yy18
	default:
		goto yy5
	}
yy9:
	YYSKIP ()
	a = &in.yyt1
	b = &in.yyt2
	c = &in.yyt3
//line "golang/005_stags_decorate.--lang(go).re":77
	{
		return *a, *b, *c
	}
//line "golang/005_stags_decorate.--lang(go).go":162
yy11:
	YYSKIP ()
	yych = YYPEEK ()
	switch (yych) {
	case 0x00:
		YYSTAGN (&in.yyt2)
		YYSTAGN (&in.yyt3)
		goto yy9
	case 'a':
		goto yy11
	case 'b':
		YYSTAGP (&in.yyt2)
		goto yy20
	default:
		goto yy13
	}
yy13:
	YYRESTORE ()
	goto yy5
yy14:
	YYSKIP ()
	yych = YYPEEK ()
	switch (yych) {
	case 'c':
		YYSTAGP (&in.yyt3)
		goto yy21
	default:
		goto yy13
	}
yy15:
	YYSKIP ()
	yych = YYPEEK ()
	switch (yych) {
	case 0x00:
		goto yy2
	case 'a':
		YYSTAGP (&in.yyt1)
		goto yy22
	default:
		goto yy13
	}
yy16:
	YYSKIP ()
	yych = YYPEEK ()
	switch (yych) {
	case 0x00:
		YYSTAGN (&in.yyt1)
		YYSTAGN (&in.yyt3)
		goto yy9
	case 'b':
		goto yy16
	default:
		goto yy13
	}
yy18:
	YYSKIP ()
	yych = YYPEEK ()
	switch (yych) {
	case 0x00:
		YYSTAGN (&in.yyt1)
		YYSTAGN (&in.yyt2)
		goto yy9
	case 'c':
		goto yy18
	default:
		goto yy13
	}
yy20:
	YYSKIP ()
	yych = YYPEEK ()
	switch (yych) {
	case 'c':
		YYSTAGP (&in.yyt3)
		goto yy23
	default:
		goto yy13
	}
yy21:
	YYSKIP ()
	yych = YYPEEK ()
	switch (yych) {
	case 'a':
		YYSTAGP (&in.yyt1)
		goto yy22
	default:
		goto yy24
	}
yy22:
	YYSKIP ()
	yych = YYPEEK ()
	switch (yych) {
	case 'b':
		YYSTAGP (&in.yyt2)
		goto yy27
	case 'c':
		YYSTAGN (&in.yyt2)
		YYSTAGP (&in.yyt3)
		goto yy15
	default:
		goto yy13
	}
yy23:
	YYSKIP ()
	yych = YYPEEK ()
yy24:
	switch (yych) {
	case 0x00:
		goto yy25
	case 'c':
		goto yy23
	default:
		goto yy13
	}
yy25:
	YYSKIP ()
	a = &in.yyt1
	b = &in.yyt2
	c = &in.yyt3
//line "golang/005_stags_decorate.--lang(go).re":73
	{
		return *a, *b, *c
	}
//line "golang/005_stags_decorate.--lang(go).go":285
yy27:
	YYSKIP ()
	yych = YYPEEK ()
	switch (yych) {
	case 'c':
		YYSTAGP (&in.yyt3)
		goto yy15
	default:
		goto yy13
	}
}
//line "golang/005_stags_decorate.--lang(go).re":84

}

func main() {
	if a, b, c := Lex("aabcc\000"); !(a == 0 && b == 2 && c == 3) {
		panic("expected 0,2,3")
	}
	if a, b, c := Lex("aaa\000"); !(a == 0 && b == -1 && c == -1) {
		panic("expected 0,-1,-1")
	}
	if a, b, c := Lex("acabc\000"); !(a == 2 && b == 3 && c == 4) {
		panic("expected 2,3,4")
	}
	if a, b, c := Lex("abcac\000"); !(a == 3 && b == -1 && c == 4) {
		panic("expected 3,-1,4")
	}
	if a, b, c := Lex("ab\000"); !(a == -2 && b == -2 && c == -2) {
		panic("expected -2,-2,-2")
	}
}
