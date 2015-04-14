#include "lexer.hpp"
#include <stdio.h>

using namespace myun2::lexical;

typedef sequence<
	string_with<':'>,
	char_<':' >,
	string_with<'\0'>
> example_parser;

int main()
{
	example_parser parser;
	result r = parser.parse("ABC:DEF");
	printf("%s\n", r[0].c_str());
	printf("%s\n", r[1].c_str());

	return 0;
}
