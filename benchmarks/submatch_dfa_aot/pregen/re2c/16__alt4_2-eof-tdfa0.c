/* Generated by re2c */
#line 1 "../../../benchmarks/submatch_dfa_aot/src/re2c/16__alt4_2.re"
#include <assert.h>
#include <stdlib.h>
#include "common.h"

#line 15 "../../../benchmarks/submatch_dfa_aot/src/re2c/common.re"


typedef struct taglist_t {
    struct taglist_t *pred;
    long dist;
} taglist_t;

typedef struct taglistpool_t {
    taglist_t *head;
    taglist_t *next;
    taglist_t *last;
} taglistpool_t;

typedef struct {
    char *buf;
    char *lim;
    char *cur;
    char *mar;
    char *tok;
    char *yyt1;
char *yyt10;
char *yyt11;
char *yyt12;
char *yyt13;
char *yyt14;
char *yyt15;
char *yyt16;
char *yyt17;
char *yyt18;
char *yyt19;
char *yyt2;
char *yyt20;
char *yyt21;
char *yyt22;
char *yyt23;
char *yyt3;
char *yyt4;
char *yyt5;
char *yyt6;
char *yyt7;
char *yyt8;
char *yyt9;

    
    taglistpool_t tlp;
    int eof;
} input_t;

static inline void taglistpool_clear(taglistpool_t *tlp, input_t *in)
{
    tlp->next = tlp->head;
    
}

static inline void taglistpool_init(taglistpool_t *tlp)
{
    static const unsigned size = 1024 * 1024;
    tlp->head = (taglist_t*)malloc(size * sizeof(taglist_t));
    tlp->next = tlp->head;
    tlp->last = tlp->head + size;
}

static inline void taglistpool_free(taglistpool_t *tlp)
{
    free(tlp->head);
    tlp->head = tlp->next = tlp->last = NULL;
}

static inline void taglist(taglist_t **ptl, const char *b, const char *t, taglistpool_t *tlp)
{
#ifdef GROW_MTAG_LIST
    if (tlp->next >= tlp->last) {
        const unsigned size = tlp->last - tlp->head;
        taglist_t *head = (taglist_t*)malloc(2 * size * sizeof(taglist_t));
        memcpy(head, tlp->head, size * sizeof(taglist_t));
        free(tlp->head);
        tlp->head = head;
        tlp->next = head + size;
        tlp->last = head + size * 2;
    }
#else
    assert(tlp->next < tlp->last);
#endif
    taglist_t *tl = tlp->next++;
    tl->pred = *ptl;
    tl->dist = t - b;
    *ptl = tl;
}

#line 6 "../../../benchmarks/submatch_dfa_aot/src/re2c/include-eof/fill.re"


static inline int fill(input_t *in)
{
    size_t free;
    if (in->eof) return 1;

    free = in->tok - in->buf;
    assert(free > 0);

    memmove(in->buf, in->tok, in->lim - in->tok);
    in->lim -= free;
    in->cur -= free;
    in->mar -= free;
    in->tok -= free;
    if (in->yyt1) in->yyt1 -= free;
if (in->yyt10) in->yyt10 -= free;
if (in->yyt11) in->yyt11 -= free;
if (in->yyt12) in->yyt12 -= free;
if (in->yyt13) in->yyt13 -= free;
if (in->yyt14) in->yyt14 -= free;
if (in->yyt15) in->yyt15 -= free;
if (in->yyt16) in->yyt16 -= free;
if (in->yyt17) in->yyt17 -= free;
if (in->yyt18) in->yyt18 -= free;
if (in->yyt19) in->yyt19 -= free;
if (in->yyt2) in->yyt2 -= free;
if (in->yyt20) in->yyt20 -= free;
if (in->yyt21) in->yyt21 -= free;
if (in->yyt22) in->yyt22 -= free;
if (in->yyt23) in->yyt23 -= free;
if (in->yyt3) in->yyt3 -= free;
if (in->yyt4) in->yyt4 -= free;
if (in->yyt5) in->yyt5 -= free;
if (in->yyt6) in->yyt6 -= free;
if (in->yyt7) in->yyt7 -= free;
if (in->yyt8) in->yyt8 -= free;
if (in->yyt9) in->yyt9 -= free;


    in->lim += fread(in->lim, 1, free, stdin);
    in->lim[0] = 0;

    if (in->lim < in->buf + SIZE) {
        in->eof = 1;
    }

    return 0;
}

static inline void init_input(input_t *in)
{
    in->buf = (char*) malloc(SIZE + 1);
    in->lim = in->buf + SIZE;
    in->cur = in->lim;
    in->mar = in->lim;
    in->tok = in->lim;
    in->yyt1 = 0;
in->yyt10 = 0;
in->yyt11 = 0;
in->yyt12 = 0;
in->yyt13 = 0;
in->yyt14 = 0;
in->yyt15 = 0;
in->yyt16 = 0;
in->yyt17 = 0;
in->yyt18 = 0;
in->yyt19 = 0;
in->yyt2 = 0;
in->yyt20 = 0;
in->yyt21 = 0;
in->yyt22 = 0;
in->yyt23 = 0;
in->yyt3 = 0;
in->yyt4 = 0;
in->yyt5 = 0;
in->yyt6 = 0;
in->yyt7 = 0;
in->yyt8 = 0;
in->yyt9 = 0;

    
    taglistpool_init(&in->tlp);
    in->eof = 0;
    fill(in);
}


static inline void free_input(input_t *in)
{
    free(in->buf);
    taglistpool_free(&in->tlp);
}

static int lex(input_t *in, Output *out);

int main(int argc, char **argv)
{
    PRE;
    input_t in;
    Output out;

    init_input(&in);
    init_output(&out);

    switch (lex(&in, &out)) {
        case 0:  break;
        case 1:  fprintf(stderr, "*** %s: syntax error\n", argv[0]); break;
        case 2:  fprintf(stderr, "*** %s: yyfill error\n", argv[0]); break;
        default: fprintf(stderr, "*** %s: panic\n", argv[0]); break;
    }

    flush(&out);
    free_output(&out);
    free_input(&in);

    POST;
    return 0;
}


static int lex(input_t *in, Output *out)
{
    const char
        *a1, *b1,
        *a2, *b2,
        *a3, *b3,
        *a4, *b4,
        *a5, *b5,
        *a6, *b6,
        *a7, *b7,
        *a8, *b8;
loop:
    in->tok = in->cur;

#line 234 "gen/re2c/16__alt4_2-eof-tdfa0.c"
{
	char yych;
	in->yyt3 = in->yyt4 = in->yyt7 = in->yyt8 = in->yyt11 = in->yyt12 = in->yyt15 = in->yyt16 = NULL;
	in->yyt1 = in->yyt2 = in->yyt5 = in->yyt6 = in->yyt9 = in->yyt10 = in->yyt13 = in->yyt14 = in->yyt17 = in->cur;
yyFillLabel3_0:
	yych = *in->cur;
	switch (yych) {
	case '\n':
		++in->cur;
		goto yy4;
	case 'a':
		++in->cur;
		in->yyt3 = in->yyt4 = in->yyt7 = in->yyt8 = in->yyt11 = in->yyt12 = in->yyt15 = in->yyt16 = NULL;
		in->yyt2 = in->yyt6 = in->yyt10 = in->yyt13 = in->yyt14 = in->yyt18 = in->yyt19 = in->yyt20 = in->yyt21 = in->cur;
		goto yy6;
	case 'b':
		++in->cur;
		in->yyt14 = in->yyt15 = in->yyt20 = in->yyt22 = NULL;
		in->yyt13 = in->yyt16 = in->yyt18 = in->yyt19 = in->yyt21 = in->cur;
		goto yy7;
	default:
		if (in->lim <= in->cur) {
			if (fill(in) == 0) goto yyFillLabel3_0;
			goto yy25;
		}
		++in->cur;
		goto yy2;
	}
yy2:
yy3:
#line 17 "../../../benchmarks/submatch_dfa_aot/src/re2c/16__alt4_2.re"
	{ return 1; }
#line 267 "gen/re2c/16__alt4_2-eof-tdfa0.c"
yy4:
	a1 = in->yyt1;
	a2 = in->yyt2;
	b1 = in->yyt3;
	b2 = in->yyt4;
	a3 = in->yyt5;
	a4 = in->yyt6;
	b3 = in->yyt7;
	b4 = in->yyt8;
	a5 = in->yyt9;
	a6 = in->yyt10;
	b5 = in->yyt11;
	b6 = in->yyt12;
	a7 = in->yyt13;
	a8 = in->yyt14;
	b7 = in->yyt15;
	b8 = in->yyt16;
#line 31 "../../../benchmarks/submatch_dfa_aot/src/re2c/16__alt4_2.re"
	{
        if (a1)      { outc(out, 'A'); outs(out, a1, a2); }
        else if (b1) { outc(out, 'B'); outs(out, b1, b2); }
        if (a3)      { outc(out, 'A'); outs(out, a3, a4); }
        else if (b3) { outc(out, 'B'); outs(out, b3, b4); }
        if (a6)      { outc(out, 'A'); outs(out, a5, a6); }
        else if (b6) { outc(out, 'B'); outs(out, b5, b6); }
        if (a8)      { outc(out, 'A'); outs(out, a7, a8); }
        else if (b8) { outc(out, 'B'); outs(out, b7, b8); }
        outc(out, '\n');
        goto loop;
    }
#line 298 "gen/re2c/16__alt4_2-eof-tdfa0.c"
yy6:
	in->mar = in->cur;
yyFillLabel3_1:
	yych = *in->cur;
	switch (yych) {
	case '\n':
		++in->cur;
		in->yyt5 = in->yyt18;
		in->yyt9 = in->yyt19;
		goto yy4;
	case 'a':
		++in->cur;
		in->yyt3 = in->yyt4 = in->yyt7 = in->yyt8 = in->yyt11 = in->yyt12 = in->yyt15 = in->yyt16 = NULL;
		in->yyt2 = in->yyt5 = in->yyt6 = in->yyt9 = in->yyt10 = in->yyt13 = in->yyt14 = in->yyt20 = in->yyt21 = in->cur;
		goto yy8;
	case 'b':
		++in->cur;
		in->yyt5 = in->yyt14 = NULL;
		in->yyt9 = in->yyt13 = in->yyt16 = in->yyt17 = in->cur;
		goto yy11;
	default:
		if (in->lim <= in->cur) {
			if (fill(in) == 0) goto yyFillLabel3_1;
		}
		goto yy3;
	}
yy7:
	in->mar = in->cur;
yyFillLabel3_2:
	yych = *in->cur;
	switch (yych) {
	case '\n':
		++in->cur;
		in->yyt13 = in->yyt15;
		in->yyt15 = in->yyt1;
		goto yy4;
	case 'a':
		++in->cur;
		in->yyt11 = in->yyt12 = in->yyt15 = in->yyt16 = NULL;
		in->yyt10 = in->yyt14 = in->yyt23 = in->cur;
		goto yy13;
	case 'b':
		++in->cur;
		in->yyt13 = in->yyt14 = in->yyt20 = in->yyt22 = NULL;
		in->yyt15 = in->yyt16 = in->yyt18 = in->yyt19 = in->yyt21 = in->cur;
		goto yy15;
	default:
		if (in->lim <= in->cur) {
			if (fill(in) == 0) goto yyFillLabel3_2;
		}
		goto yy3;
	}
yy8:
yyFillLabel3_3:
	yych = *in->cur;
	switch (yych) {
	case '\n':
		++in->cur;
		goto yy4;
	case 'a':
		++in->cur;
		in->yyt3 = in->yyt4 = in->yyt7 = in->yyt8 = in->yyt11 = in->yyt12 = in->yyt15 = in->yyt16 = NULL;
		in->yyt2 = in->yyt5 = in->yyt6 = in->yyt9 = in->yyt10 = in->yyt13 = in->yyt14 = in->yyt20 = in->yyt21 = in->cur;
		goto yy8;
	case 'b':
		++in->cur;
		in->yyt18 = in->yyt5;
		in->yyt19 = in->yyt9;
		in->yyt5 = in->yyt14 = NULL;
		in->yyt9 = in->yyt13 = in->yyt16 = in->yyt17 = in->cur;
		goto yy11;
	default:
		if (in->lim <= in->cur) {
			if (fill(in) == 0) goto yyFillLabel3_3;
		}
		goto yy10;
	}
yy10:
	in->cur = in->mar;
	goto yy3;
yy11:
yyFillLabel3_4:
	yych = *in->cur;
	switch (yych) {
	case '\n':
		++in->cur;
		in->yyt9 = in->yyt19;
		in->yyt13 = in->yyt5;
		in->yyt15 = in->yyt20;
		in->yyt5 = in->yyt18;
		goto yy4;
	case 'a':
		++in->cur;
		in->yyt11 = in->yyt12 = in->yyt15 = in->yyt16 = NULL;
		in->yyt10 = in->yyt14 = in->yyt19 = in->cur;
		goto yy17;
	case 'b':
		++in->cur;
		in->yyt5 = in->yyt14 = NULL;
		in->yyt9 = in->yyt13 = in->yyt16 = in->yyt17 = in->cur;
		goto yy11;
	default:
		if (in->lim <= in->cur) {
			if (fill(in) == 0) goto yyFillLabel3_4;
		}
		goto yy10;
	}
yy13:
yyFillLabel3_5:
	yych = *in->cur;
	switch (yych) {
	case '\n':
		++in->cur;
		in->yyt9 = in->yyt20;
		in->yyt10 = in->yyt20;
		in->yyt11 = in->yyt1;
		in->yyt12 = in->yyt21;
		goto yy4;
	case 'a':
		++in->cur;
		in->yyt11 = in->yyt12 = in->yyt15 = in->yyt16 = NULL;
		in->yyt10 = in->yyt14 = in->yyt23 = in->cur;
		goto yy13;
	case 'b':
		++in->cur;
		in->yyt5 = in->yyt9 = in->yyt13 = in->yyt14 = NULL;
		in->yyt6 = in->yyt16 = in->yyt20 = in->cur;
		goto yy19;
	default:
		if (in->lim <= in->cur) {
			if (fill(in) == 0) goto yyFillLabel3_5;
		}
		goto yy10;
	}
yy15:
yyFillLabel3_6:
	yych = *in->cur;
	switch (yych) {
	case '\n':
		++in->cur;
		in->yyt15 = in->yyt1;
		goto yy4;
	case 'a':
		++in->cur;
		in->yyt13 = in->yyt15;
		in->yyt11 = in->yyt12 = in->yyt15 = in->yyt16 = NULL;
		in->yyt10 = in->yyt14 = in->yyt23 = in->cur;
		goto yy13;
	case 'b':
		++in->cur;
		in->yyt13 = in->yyt14 = in->yyt20 = in->yyt22 = NULL;
		in->yyt15 = in->yyt16 = in->yyt18 = in->yyt19 = in->yyt21 = in->cur;
		goto yy15;
	default:
		if (in->lim <= in->cur) {
			if (fill(in) == 0) goto yyFillLabel3_6;
		}
		goto yy10;
	}
yy17:
yyFillLabel3_7:
	yych = *in->cur;
	switch (yych) {
	case '\n':
		++in->cur;
		in->yyt9 = in->yyt5;
		in->yyt10 = in->yyt5;
		in->yyt11 = in->yyt20;
		in->yyt12 = in->yyt17;
		in->yyt5 = in->yyt18;
		goto yy4;
	case 'a':
		++in->cur;
		in->yyt11 = in->yyt12 = in->yyt15 = in->yyt16 = NULL;
		in->yyt10 = in->yyt14 = in->yyt19 = in->cur;
		goto yy17;
	case 'b':
		++in->cur;
		in->yyt13 = in->yyt14 = NULL;
		in->yyt16 = in->cur;
		goto yy21;
	default:
		if (in->lim <= in->cur) {
			if (fill(in) == 0) goto yyFillLabel3_7;
		}
		goto yy10;
	}
yy19:
yyFillLabel3_8:
	yych = *in->cur;
	switch (yych) {
	case '\n':
		++in->cur;
		in->yyt5 = in->yyt22;
		in->yyt6 = in->yyt22;
		in->yyt7 = in->yyt1;
		in->yyt8 = in->yyt18;
		in->yyt9 = in->yyt19;
		in->yyt15 = in->yyt23;
		goto yy4;
	case 'a':
		++in->cur;
		in->yyt15 = in->yyt16 = NULL;
		in->yyt14 = in->cur;
		goto yy23;
	case 'b':
		++in->cur;
		in->yyt5 = in->yyt9 = in->yyt13 = in->yyt14 = NULL;
		in->yyt6 = in->yyt16 = in->yyt20 = in->cur;
		goto yy19;
	default:
		if (in->lim <= in->cur) {
			if (fill(in) == 0) goto yyFillLabel3_8;
		}
		goto yy10;
	}
yy21:
yyFillLabel3_9:
	yych = *in->cur;
	switch (yych) {
	case '\n':
		++in->cur;
		in->yyt6 = in->yyt5;
		in->yyt7 = in->yyt21;
		in->yyt8 = in->yyt17;
		in->yyt15 = in->yyt19;
		goto yy4;
	case 'b':
		++in->cur;
		in->yyt13 = in->yyt14 = NULL;
		in->yyt16 = in->cur;
		goto yy21;
	default:
		if (in->lim <= in->cur) {
			if (fill(in) == 0) goto yyFillLabel3_9;
		}
		goto yy10;
	}
yy23:
yyFillLabel3_10:
	yych = *in->cur;
	switch (yych) {
	case '\n':
		++in->cur;
		in->yyt1 = in->yyt22;
		in->yyt2 = in->yyt22;
		in->yyt3 = in->yyt17;
		in->yyt4 = in->yyt18;
		in->yyt7 = in->yyt11;
		in->yyt8 = in->yyt11;
		in->yyt10 = in->yyt5;
		in->yyt11 = in->yyt23;
		in->yyt12 = in->yyt20;
		in->yyt13 = in->yyt6;
		in->yyt5 = in->yyt18;
		in->yyt6 = in->yyt23;
		goto yy4;
	case 'a':
		++in->cur;
		in->yyt15 = in->yyt16 = NULL;
		in->yyt14 = in->cur;
		goto yy23;
	default:
		if (in->lim <= in->cur) {
			if (fill(in) == 0) goto yyFillLabel3_10;
		}
		goto yy10;
	}
yy25:
#line 5 "../../../benchmarks/submatch_dfa_aot/src/re2c/include-eof/fill.re"
	{ return 0; }
#line 570 "gen/re2c/16__alt4_2-eof-tdfa0.c"
}
#line 43 "../../../benchmarks/submatch_dfa_aot/src/re2c/16__alt4_2.re"

}
