/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --eager-skip

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 3) YYFILL(3);
	yych = *YYCURSOR;
	switch (yych) {
	case 'b':
		++YYCURSOR;
		goto yy3;
	default:	goto yy2;
	}
yy2:
	{}
yy3:
	yych = *(YYMARKER = YYCURSOR);
	switch (yych) {
	case 'c':	goto yy2;
	default:	goto yy7;
	}
yy4:
	yych = *YYCURSOR;
	switch (yych) {
	case 'c':
		++YYCURSOR;
		goto yy8;
	default:	goto yy5;
	}
yy5:
	YYCURSOR = YYMARKER;
	goto yy2;
yy6:
	YYMARKER = YYCURSOR;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
yy7:
	++YYCURSOR;
	switch (yych) {
	case 'b':	goto yy6;
	case 'c':	goto yy8;
	default:	goto yy4;
	}
yy8:
	{}
}

tags/skip_tags_disorder3.re:4:5: warning: rule matches empty string [-Wmatch-empty-string]
