/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -ci
#include <assert.h>
#include <string.h>


enum YYCONDTYPE {
	yycinit,
	yyccomment,
};


int lex(const char* cur)
{
    const char* lim;
    const char* mrk;

    char yych;

    int condition = yycinit;

    lim = cur + strlen(cur);
loop:
    mrk = cur;

    
	switch (condition) {
	case yycinit:
		goto yyc_init;
	case yyccomment:
		goto yyc_comment;
	}
/* *********************************** */
yyc_init:
	yych = *cur;
	switch (yych) {
	case '\t':
	case ' ':	goto yy4;
	case '\n':	goto yy7;
	case '/':	goto yy10;
	default:
		if (lim <= cur) goto yy16;
		goto yy2;
	}
yy2:
	++cur;
yy3:
	{ return -1; }
yy4:
	yych = *++cur;
	switch (yych) {
	case '\t':
	case ' ':	goto yy4;
	default:	goto yy6;
	}
yy6:
	{ goto loop; }
yy7:
	yych = *++cur;
	switch (yych) {
	case '\n':	goto yy7;
	default:	goto yy9;
	}
yy9:
	{ goto loop; }
yy10:
	yych = *++cur;
	switch (yych) {
	case '*':	goto yy11;
	case '/':	goto yy13;
	default:	goto yy3;
	}
yy11:
	++cur;
	condition = yyccomment;
	goto yyc_comment;
yy13:
	yych = *++cur;
	switch (yych) {
	case '\n':	goto yy15;
	default:
		if (lim <= cur) goto yy15;
		goto yy13;
	}
yy15:
	{ goto loop; }
yy16:
	{ return  0; }
/* *********************************** */
yyc_comment:
	yych = *cur;
	switch (yych) {
	case '\n':	goto yy22;
	case '*':	goto yy25;
	default:
		if (lim <= cur) goto yy32;
		goto yy19;
	}
yy19:
	yych = *++cur;
	switch (yych) {
	case '\n':	goto yy21;
	case '*':	goto yy28;
	default:
		if (lim <= cur) goto yy21;
		goto yy19;
	}
yy21:
	goto yyc_comment;
yy22:
	yych = *++cur;
	switch (yych) {
	case '\n':	goto yy22;
	default:	goto yy24;
	}
yy24:
	{ goto loop; }
yy25:
	yych = *++cur;
	switch (yych) {
	case '*':	goto yy25;
	case '/':	goto yy30;
	default:	goto yy27;
	}
yy27:
	goto yyc_comment;
yy28:
	yych = *++cur;
	switch (yych) {
	case '*':	goto yy28;
	case '/':	goto yy30;
	default:	goto yy21;
	}
yy30:
	++cur;
	condition = yycinit;
	{ goto loop; }
yy32:
	{ return -1; }

}


int main(void)
{
    assert(!lex("/* hello, */ // world !"));

    return 0;
}
