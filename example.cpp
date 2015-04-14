#include "lexer.hpp"
#include "string.hpp"
#include "utils.hpp"
#include <stdio.h>

using namespace myun2::lexical;

typedef sequence<
	string_with<':'>,
	char_<':' >,
	string_with<'\0'>
> coron_divided;

int main()
{
	string_iterator si("ABC:DEF");

	strings_document result = coron_divided().parse<strings_document>(si);
	printf("%s\n", result[0].c_str());
	printf("%s\n", result[1].c_str());

	return 0;
}
