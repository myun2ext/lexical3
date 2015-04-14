#include "lexer.hpp"
#include "parser.hpp"
#include <stdio.h>

using namespace myun2::lexical;

typedef sequence<char_<'A'>, char_<'B'>, char_<'C'> > ABC;

int main()
{
	ABC abc;
	printf("%d\n", abc.parse("ABC"));
	printf("%d\n", abc.parse("AFZ"));

	char_<'A'> a_char;
	printf("%d\n", a_char.parse('A'));
	printf("%d\n", a_char.parse('B'));

	return 0;
}
