#include "lexer.hpp"
#include "parser.hpp"
#include <stdio.h>

using namespace myun2::lexical;

//typedef sequence<char_<'A'>, char_<'B'>, char_<'C'> > ABC;

int main()
{
	//printf("%d\n", parse<bool, ABC>("ABC"));
	//printf("%d\n", parse<bool, ABC>("AFZ"));

	char_<'A'> a_char;
	printf("%d\n", a_char.parse('A'));
	printf("%d\n", a_char.parse('B'));
	return 0;
}
