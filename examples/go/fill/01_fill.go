// Code generated by re2c, DO NOT EDIT.
//line "go/fill/01_fill.re":1
//go:generate re2go $INPUT -o $OUTPUT
package main

import (
	"os"
	"testing"
)

// Intentionally small to trigger buffer refill.
const SIZE int = 16

type Input struct {
	file   *os.File
	data   []byte
	cursor int
	marker int
	token  int
	limit  int
	eof    bool
}

func fill(in *Input) int {
	// If nothing can be read, fail.
	if in.eof {
		return 1
	}

	// Check if at least some space can be freed.
	if in.token == 0 {
		// In real life can reallocate a larger buffer.
		panic("fill error: lexeme too long")
	}

	// Discard everything up to the start of the current lexeme,
	// shift buffer contents and adjust offsets.
	copy(in.data[0:], in.data[in.token:in.limit])
	in.cursor -= in.token
	in.marker -= in.token
	in.limit -= in.token
	in.token = 0

	// Read new data (as much as possible to fill the buffer).
	n, _ := in.file.Read(in.data[in.limit:SIZE])
	in.limit += n
	in.data[in.limit] = 0

	// If read less than expected, this is the end of input.
	in.eof = in.limit < SIZE

	// If nothing has been read, fail.
	if n == 0 {
		return 1
	}

	return 0
}

func lex(in *Input) int {
	count := 0
loop:
	in.token = in.cursor
	
//line "go/fill/01_fill.go":66
{
	var yych byte
yyFillLabel0:
	yych = in.data[in.cursor]
	switch (yych) {
	case ' ':
		goto yy4
	case '\'':
		goto yy7
	default:
		if (in.limit <= in.cursor) {
			if (fill(in) == 0) {
				goto yyFillLabel0
			}
			goto yy13
		}
		goto yy2
	}
yy2:
	in.cursor += 1
yy3:
//line "go/fill/01_fill.re":72
	{ return -1 }
//line "go/fill/01_fill.go":90
yy4:
	in.cursor += 1
yyFillLabel1:
	yych = in.data[in.cursor]
	switch (yych) {
	case ' ':
		goto yy4
	default:
		if (in.limit <= in.cursor) {
			if (fill(in) == 0) {
				goto yyFillLabel1
			}
		}
		goto yy6
	}
yy6:
//line "go/fill/01_fill.re":75
	{ goto loop }
//line "go/fill/01_fill.go":109
yy7:
	in.cursor += 1
	in.marker = in.cursor
yyFillLabel2:
	yych = in.data[in.cursor]
	if (yych >= 0x01) {
		goto yy9
	}
	if (in.limit <= in.cursor) {
		if (fill(in) == 0) {
			goto yyFillLabel2
		}
		goto yy3
	}
yy8:
	in.cursor += 1
yyFillLabel3:
	yych = in.data[in.cursor]
yy9:
	switch (yych) {
	case '\'':
		goto yy10
	case '\\':
		goto yy12
	default:
		if (in.limit <= in.cursor) {
			if (fill(in) == 0) {
				goto yyFillLabel3
			}
			goto yy14
		}
		goto yy8
	}
yy10:
	in.cursor += 1
//line "go/fill/01_fill.re":74
	{ count += 1; goto loop }
//line "go/fill/01_fill.go":147
yy12:
	in.cursor += 1
yyFillLabel4:
	yych = in.data[in.cursor]
	if (yych <= 0x00) {
		if (in.limit <= in.cursor) {
			if (fill(in) == 0) {
				goto yyFillLabel4
			}
			goto yy14
		}
		goto yy8
	}
	goto yy8
yy13:
//line "go/fill/01_fill.re":73
	{ return count }
//line "go/fill/01_fill.go":165
yy14:
	in.cursor = in.marker
	goto yy3
}
//line "go/fill/01_fill.re":76

}

// Prepare a file with the input text and run the lexer.
func test(data string) (result int) {
	tmpfile := "input.txt"

	f, _ := os.Create(tmpfile)
	f.WriteString(data)
	f.Seek(0, 0)

	defer func() {
		if r := recover(); r != nil {
			result = -2
		}
		f.Close()
		os.Remove(tmpfile)
	}()

	in := &Input{
		file:   f,
		data:   make([]byte, SIZE+1),
		cursor: SIZE,
		marker: SIZE,
		token:  SIZE,
		limit:  SIZE,
		eof:    false,
	}

	return lex(in)
}

func TestLex(t *testing.T) {
	var tests = []struct {
		res int
		str string
	}{
		{0, ""},
		{2, "'one' 'two'"},
		{3, "'qu\000tes' 'are' 'fine: \\'' "},
		{-1, "'unterminated\\'"},
		{-2, "'loooooooooooong'"},
	}

	for _, x := range tests {
		t.Run(x.str, func(t *testing.T) {
			res := test(x.str)
			if res != x.res {
				t.Errorf("got %d, want %d", res, x.res)
			}
		})
	}
}
