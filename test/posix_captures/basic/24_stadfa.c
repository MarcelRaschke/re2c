/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --flex-syntax --stadfa

{
	YYCTYPE yych;
	unsigned int yyaccept = 0;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *(YYMARKER = YYCURSOR);
	switch (yych) {
	case 'a':	goto yy3;
	case 'b':	goto yy4;
	default:
		yyt2 = NULL;
		yyt1 = YYCURSOR;
		goto yy2;
	}
yy2:
	yynmatch = 2;
	yypmatch[0] = yyt1;
	yypmatch[3] = yyt2;
	yypmatch[1] = YYCURSOR;
	yypmatch[2] = yyt2;
	if (yyt2 != NULL) yypmatch[2] -= 2;
	{}
yy3:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt1 = yyt2 = yyt3 = YYCURSOR - 1;
	switch (yych) {
	case 'a':	goto yy6;
	case 'b':	goto yy7;
	default:
		yyt2 = NULL;
		goto yy2;
	}
yy4:
	yych = *++YYCURSOR;
	yyt4 = YYCURSOR - 1;
	switch (yych) {
	case 'a':	goto yy8;
	default:	goto yy5;
	}
yy5:
	YYCURSOR = YYMARKER;
	switch (yyaccept) {
	case 0:
		yyt2 = NULL;
		yyt1 = YYCURSOR;
		goto yy2;
	case 1:
		yyt2 = NULL;
		goto yy2;
	default:
		yyt2 = YYCURSOR;
		goto yy2;
	}
yy6:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	yyt3 = yyt1;
	switch (yych) {
	case 'b':	goto yy9;
	default:	goto yy5;
	}
yy7:
	yyaccept = 2;
	YYMARKER = ++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	yyt4 = yyt2;
	yyt1 = yyt3;
	yyt2 = yyt3;
	switch (yych) {
	case 'a':	goto yy10;
	case 'b':	goto yy11;
	default:
		yyt2 = YYCURSOR;
		goto yy2;
	}
yy8:
	yyaccept = 2;
	YYMARKER = ++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	yyt2 = yyt4;
	yyt1 = yyt4;
	switch (yych) {
	case 'a':	goto yy6;
	case 'b':	goto yy11;
	default:
		yyt2 = YYCURSOR;
		goto yy2;
	}
yy9:
	yyaccept = 2;
	YYMARKER = ++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	yyt2 = yyt3;
	yyt1 = yyt3;
	switch (yych) {
	case 'a':	goto yy6;
	case 'b':	goto yy11;
	default:
		yyt2 = YYCURSOR;
		goto yy2;
	}
yy10:
	yyaccept = 2;
	YYMARKER = ++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	yyt2 = yyt4;
	yyt3 = yyt1;
	yyt1 = yyt4;
	switch (yych) {
	case 'a':	goto yy6;
	case 'b':	goto yy7;
	default:
		yyt2 = YYCURSOR;
		goto yy2;
	}
yy11:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	yyt4 = yyt2;
	switch (yych) {
	case 'a':	goto yy8;
	default:	goto yy5;
	}
}

posix_captures/basic/24_stadfa.re:6:4: warning: rule matches empty string [-Wmatch-empty-string]
posix_captures/basic/24_stadfa.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]
posix_captures/basic/24_stadfa.re:7:7: warning: unreachable rule (shadowed by rule at line 6) [-Wunreachable-rules]