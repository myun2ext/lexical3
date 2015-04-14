#include "lexer.hpp"
#include "parser.hpp"
#include <stdio.h>

using namespace myun2::lexical;

typedef sequence<char_<'A'>, char_<'B'>, char_<'C'> > ABC;

int main()
{
	printf("%d\n", parse<bool, ABC>("ABC"));
	printf("%d\n", parse<bool, ABC>("AFZ"));
	return 0;
}
