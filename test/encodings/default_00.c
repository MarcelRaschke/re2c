/* Generated by re2c */
#line 1 "encodings/default_00.re"
// re2c $INPUT -o $OUTPUT 

#line 6 "encodings/default_00.c"
{
	YYCTYPE yych;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':	goto yy4;
	default:	goto yy2;
	}
yy2:
	++YYCURSOR;
#line 3 "encodings/default_00.re"
	{ return DEFAULT; }
#line 19 "encodings/default_00.c"
yy4:
	++YYCURSOR;
#line 4 "encodings/default_00.re"
	{ return A; }
#line 24 "encodings/default_00.c"
}
#line 5 "encodings/default_00.re"

