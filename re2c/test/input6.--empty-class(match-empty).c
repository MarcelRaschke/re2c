re2c: warning: line 3: empty character class [-Wempty-character-class]
re2c: warning: line 3: empty character class [-Wempty-character-class]
/* Generated by re2c */
#line 1 "input6.--empty-class(match-empty).re"

#line 5 "<stdout>"
{
	YYCTYPE yych;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	goto yy3;
#line 3 "input6.--empty-class(match-empty).re"
	{ return 0; }
#line 13 "<stdout>"
yy3:
	++YYCURSOR;
#line 4 "input6.--empty-class(match-empty).re"
	{ return 1; }
#line 18 "<stdout>"
}
#line 6 "input6.--empty-class(match-empty).re"
