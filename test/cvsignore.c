/* Generated by re2c */
#line 1 "cvsignore.re"
// re2c $INPUT -o $OUTPUT 

#define YYFILL(n) if (cursor >= limit) break;
#define YYCTYPE char
#define YYCURSOR cursor
#define YYLIMIT limit
#define YYMARKER marker

#line 17 "cvsignore.re"


#define APPEND(text) \
	append(output, outsize, text, sizeof(text) - sizeof(YYCTYPE))

inline void append(YYCTYPE *output, size_t & outsize, const YYCTYPE * text, size_t len)
{
	memcpy(output + outsize, text, len);
	outsize += (len / sizeof(YYCTYPE));
}

void scan(YYCTYPE *pText, size_t *pSize, int *pbChanged)
{
	// rule
	// scan lines
	// find $ in lines
	//   compact $<keyword>: .. $ to $<keyword>$
  
	YYCTYPE *output;
	const YYCTYPE *cursor, *limit, *marker;

	cursor = marker = output = *pText;

	size_t insize = *pSize;
	size_t outsize = 0;

	limit = cursor + insize;

	while(1) {
loop:

#line 44 "cvsignore.c"
{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 11) YYFILL(11);
	yych = *YYCURSOR;
	switch (yych) {
	case '$':	goto yy4;
	default:	goto yy2;
	}
yy2:
	++YYCURSOR;
yy3:
#line 54 "cvsignore.re"
	{ output[outsize++] = cursor[-1]; if (cursor >= limit) break; goto loop; }
#line 58 "cvsignore.c"
yy4:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'D':	goto yy5;
	case 'I':	goto yy7;
	case 'L':	goto yy8;
	case 'R':	goto yy9;
	case 'S':	goto yy10;
	default:	goto yy3;
	}
yy5:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'a':	goto yy11;
	default:	goto yy6;
	}
yy6:
	YYCURSOR = YYMARKER;
	goto yy3;
yy7:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'd':	goto yy12;
	default:	goto yy6;
	}
yy8:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'o':	goto yy13;
	default:	goto yy6;
	}
yy9:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'e':	goto yy14;
	default:	goto yy6;
	}
yy10:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'o':	goto yy15;
	default:	goto yy6;
	}
yy11:
	yych = *++YYCURSOR;
	switch (yych) {
	case 't':	goto yy16;
	default:	goto yy6;
	}
yy12:
	yych = *++YYCURSOR;
	switch (yych) {
	case '$':	goto yy17;
	case ':':	goto yy19;
	default:	goto yy6;
	}
yy13:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'g':	goto yy20;
	default:	goto yy6;
	}
yy14:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'v':	goto yy21;
	default:	goto yy6;
	}
yy15:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'u':	goto yy22;
	default:	goto yy6;
	}
yy16:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'e':	goto yy23;
	default:	goto yy6;
	}
yy17:
	++YYCURSOR;
#line 50 "cvsignore.re"
	{ APPEND(L"$" L"Id$"); goto loop; }
#line 143 "cvsignore.c"
yy19:
	yych = *++YYCURSOR;
	switch (yych) {
	case '$':	goto yy6;
	default:	goto yy25;
	}
yy20:
	yych = *++YYCURSOR;
	switch (yych) {
	case '$':	goto yy26;
	case ':':	goto yy28;
	default:	goto yy6;
	}
yy21:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'i':	goto yy29;
	default:	goto yy6;
	}
yy22:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'r':	goto yy30;
	default:	goto yy6;
	}
yy23:
	yych = *++YYCURSOR;
	switch (yych) {
	case '$':	goto yy31;
	case ':':	goto yy33;
	default:	goto yy6;
	}
yy24:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy25:
	switch (yych) {
	case '\n':	goto yy6;
	case '$':	goto yy17;
	default:	goto yy24;
	}
yy26:
	++YYCURSOR;
#line 51 "cvsignore.re"
	{ APPEND(L"$" L"Log$"); goto loop; }
#line 190 "cvsignore.c"
yy28:
	yych = *++YYCURSOR;
	switch (yych) {
	case '$':	goto yy6;
	default:	goto yy35;
	}
yy29:
	yych = *++YYCURSOR;
	switch (yych) {
	case 's':	goto yy36;
	default:	goto yy6;
	}
yy30:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'c':	goto yy37;
	default:	goto yy6;
	}
yy31:
	++YYCURSOR;
#line 49 "cvsignore.re"
	{ APPEND(L"$" L"Date$"); goto loop; }
#line 213 "cvsignore.c"
yy33:
	yych = *++YYCURSOR;
	switch (yych) {
	case '$':	goto yy6;
	default:	goto yy39;
	}
yy34:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy35:
	switch (yych) {
	case '\n':	goto yy6;
	case '$':	goto yy26;
	default:	goto yy34;
	}
yy36:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'i':	goto yy40;
	default:	goto yy6;
	}
yy37:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'e':	goto yy41;
	default:	goto yy6;
	}
yy38:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy39:
	switch (yych) {
	case '\n':	goto yy6;
	case '$':	goto yy31;
	default:	goto yy38;
	}
yy40:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'o':	goto yy42;
	default:	goto yy6;
	}
yy41:
	yych = *++YYCURSOR;
	switch (yych) {
	case '$':	goto yy43;
	case ':':	goto yy45;
	default:	goto yy6;
	}
yy42:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'n':	goto yy46;
	default:	goto yy6;
	}
yy43:
	++YYCURSOR;
#line 53 "cvsignore.re"
	{ APPEND(L"$" L"Source$"); goto loop; }
#line 275 "cvsignore.c"
yy45:
	yych = *++YYCURSOR;
	switch (yych) {
	case '$':	goto yy6;
	default:	goto yy48;
	}
yy46:
	yych = *++YYCURSOR;
	switch (yych) {
	case '$':	goto yy49;
	case ':':	goto yy51;
	default:	goto yy6;
	}
yy47:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy48:
	switch (yych) {
	case '\n':	goto yy6;
	case '$':	goto yy43;
	default:	goto yy47;
	}
yy49:
	++YYCURSOR;
#line 52 "cvsignore.re"
	{ APPEND(L"$" L"Revision$"); goto loop; }
#line 303 "cvsignore.c"
yy51:
	yych = *++YYCURSOR;
	switch (yych) {
	case '$':	goto yy6;
	default:	goto yy53;
	}
yy52:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy53:
	switch (yych) {
	case '\n':	goto yy6;
	case '$':	goto yy49;
	default:	goto yy52;
	}
}
#line 56 "cvsignore.re"

	}
	output[outsize] = '\0';

	// set the new size
	*pSize = outsize;
	
	*pbChanged = (insize == outsize) ? 0 : 1;
}
