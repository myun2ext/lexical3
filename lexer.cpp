#include <stdio.h>
#include "lexer.hpp"
#include "or.hpp"
#include "repeat.hpp"
#include "string.hpp"
#include "charactor.hpp"
#include "utils.hpp"
#include <stdio.h>

using namespace myun2::lexical;

typedef sequence<
	string_with<or_<char_<':'>, char_<'/'> > >,
	repeat<or_<char_<':'>, char_<'/'> > >,
	string_with<char_<'\0'> >
> colon_cutter;

int main()
{
	{
		colon_cutter cc;
		string_list_document r;
		cc.parse(r, string_iterator("ABC::DEF"));
		printf("%s\n", r[0].c_str());
		printf("%s\n", r[1].c_str());
	}
	{
		colon_cutter cc;
		string_list_document r;
		cc.parse(r, string_iterator("ABC//DEF"));
		printf("%s\n", r[0].c_str());
		printf("%s\n", r[1].c_str());
	}

	return 0;
}
