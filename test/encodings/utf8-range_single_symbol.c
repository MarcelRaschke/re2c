/* Generated by re2c */
#line 1 "encodings/utf8-range_single_symbol.re"
// re2c $INPUT -o $OUTPUT -8

#line 6 "encodings/utf8-range_single_symbol.c"
{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	switch (yych) {
	case 0xD0:	goto yy3;
	default:	goto yy2;
	}
yy2:
yy3:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xB0:	goto yy4;
	default:	goto yy2;
	}
yy4:
	++YYCURSOR;
#line 3 "encodings/utf8-range_single_symbol.re"
	{ return 0; }
#line 26 "encodings/utf8-range_single_symbol.c"
}
#line 4 "encodings/utf8-range_single_symbol.re"

encodings/utf8-range_single_symbol.re:4:2: warning: control flow is undefined for strings that match 
	'[\x0-\xCF\xD1-\xFF]'
	'\xD0 [\x0-\xAF\xB1-\xFF]'
, use default rule '*' [-Wundefined-control-flow]
