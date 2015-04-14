#include "lexer.hpp"
#include "parser.hpp"
#include "string.hpp"
#include <stdio.h>
#include <string>
#include <vector>

struct strings_document
{
	::std::vector< ::std::string> l;
	bool operator << (char c) { return true; }
	bool operator << (const ::std::string &s) { l.push_back(s); return true; }
	const ::std::string& operator [] (unsigned int i) const { return l[i]; }
};

struct string_iterator
{
	const char* p;
	string_iterator(const char *p_) : p(p_) {}
	const char* operator ++(int) { return p++; }
	const char* operator ++() { return ++p; }
	char operator *() const { return *p; }
};

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
