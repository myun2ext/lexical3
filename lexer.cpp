#include "lexer.hpp"
#include "parser.hpp"
#include <stdio.h>
#include <string>
#include <vector>

struct strings_document
{
	::std::vector<::std::string> l;
	bool operator << (bool b) { return b; }
	bool operator << (::std::string s) { l.push_back(s); return s; }
}

using namespace myun2::lexical;

typedef sequence<char_<'A'>, char_<'B'>, char_<'C'> > ABC;;
typedef sequence<
	string_with<char_<':' > >,
	string_with<char_<'\0'> >
> coron_divided

int main()
{
	ABC abc;
	printf("%d\n", abc.parse("ABC"));
	printf("%d\n", abc.parse("AFZ"));

	char_<'A'> a_char;
	printf("%d\n", a_char.parse('A'));
	printf("%d\n", a_char.parse('B'));

	strings_document result = coron_divided().parse<strings_document>("ABC:DEF");
	printf("%s\n", result[0].c_str());
	printf("%s\n", result[1].c_str());

	return 0;
}
