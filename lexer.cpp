#include "lexer.hpp"
#include "parser.hpp"
#include "string.hpp"
#include <stdio.h>
#include <string>
#include <vector>
#include <memory.h>
#include <time.h>

static const int test_buffer_size = 1024 * 1024 * 1024;

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

typedef sequence<char_<'A'>, char_<'B'>, char_<'C'> > ABC;;
typedef sequence<
	//string_with<char_<':' > >,
	//string_with<char_<'\0'> >
	string_with<':'>,
	char_<':' >,
	string_with<'\0'>
> coron_divided;

int main()
{
	ABC abc;
	//printf("%d\n", abc.parse<strings_document>("ABC"));
	//printf("%d\n", abc.parse<strings_document>("AFZ"));

	char *buffer = new char[test_buffer_size];
	memset(buffer, 'A', test_buffer_size / 2);
	memset(buffer + test_buffer_size / 2, 'B', test_buffer_size / 2);
	buffer[test_buffer_size / 2] = ':';
	printf("Start. %d\n", clock());

	//string_iterator si("ABC:DEF");
	string_iterator si(buffer);
	strings_document result = coron_divided().parse<strings_document>(si);
	//printf("%s\n", result[0].c_str());
	//printf("%s\n", result[1].c_str());
	printf("End. %d\n", clock());

	return 0;
}
