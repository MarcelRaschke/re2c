/* Generated by re2c */
#line 1 "conditions/condtype_single.re"
// re2c $INPUT -o $OUTPUT -cs

#line 6 "conditions/condtype_single.c"
{
	YYCTYPE yych;
	goto yyc_a;
/* *********************************** */
yyc_a:
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych == 'a') goto yy3;
yy3:
	++YYCURSOR;
#line 3 "conditions/condtype_single.re"
	{}
#line 19 "conditions/condtype_single.c"
}
#line 4 "conditions/condtype_single.re"

conditions/condtype_single.re:4:2: warning: control flow in condition 'a' is undefined for strings that match '[\x0-\x60\x62-\xFF]', use default rule '*' [-Wundefined-control-flow]
