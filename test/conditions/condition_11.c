/* Generated by re2c */
#line 1 "conditions/condition_11.re"
// re2c $INPUT -o $OUTPUT -cg

#line 6 "conditions/condition_11.c"
{
	YYCTYPE yych;
	static void *yyctable[3] = {
		&&yyc_0,
		&&yyc_r1,
		&&yyc_r2,
	};
	goto *yyctable[YYGETCONDITION()];
/* *********************************** */
yyc_0:
	YYSETCONDITION(yycr1);
#line 4 "conditions/condition_11.re"
	{ return NULL; }
#line 20 "conditions/condition_11.c"
/* *********************************** */
yyc_r1:
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '2') {
		if (yych <= '0') goto yy5;
		if (yych <= '1') goto yy6;
		goto yy8;
	} else {
		if (yych <= '`') goto yy5;
		if (yych <= 'a') goto yy10;
		if (yych <= 'b') goto yy12;
	}
yy5:
yy6:
	++YYCURSOR;
#line 5 "conditions/condition_11.re"
	{ return "1"; }
#line 39 "conditions/condition_11.c"
yy8:
	++YYCURSOR;
#line 6 "conditions/condition_11.re"
	{ return "2"; }
#line 44 "conditions/condition_11.c"
yy10:
	++YYCURSOR;
	YYSETCONDITION(yycr2);
#line 7 "conditions/condition_11.re"
	{ return "a"; }
#line 50 "conditions/condition_11.c"
yy12:
	++YYCURSOR;
	YYSETCONDITION(yycr2);
#line 8 "conditions/condition_11.re"
	{ return "b"; }
#line 56 "conditions/condition_11.c"
/* *********************************** */
yyc_r2:
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '2') {
		if (yych <= '0') goto yy16;
		if (yych <= '1') goto yy17;
		goto yy19;
	} else {
		if (yych == 'b') goto yy21;
	}
yy16:
yy17:
	++YYCURSOR;
	YYSETCONDITION(yycr1);
#line 5 "conditions/condition_11.re"
	{ return "1"; }
#line 74 "conditions/condition_11.c"
yy19:
	++YYCURSOR;
	YYSETCONDITION(yycr1);
#line 6 "conditions/condition_11.re"
	{ return "2"; }
#line 80 "conditions/condition_11.c"
yy21:
	++YYCURSOR;
#line 8 "conditions/condition_11.re"
	{ return "b"; }
#line 85 "conditions/condition_11.c"
}
#line 10 "conditions/condition_11.re"

conditions/condition_11.re:2:0: warning: control flow in condition 'r1' is undefined for strings that match '[\x0-\x30\x33-\x60\x63-\xFF]', use default rule '*' [-Wundefined-control-flow]
conditions/condition_11.re:2:0: warning: control flow in condition 'r2' is undefined for strings that match '[\x0-\x30\x33-\x61\x63-\xFF]', use default rule '*' [-Wundefined-control-flow]
conditions/condition_11.re:2:0: warning: looks like you use hardcoded numbers instead of autogenerated condition names: better add '/*!types:re2c*/' directive or '-t, --type-header' option and don't rely on fixed condition order. [-Wcondition-order]