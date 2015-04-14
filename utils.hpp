#ifndef __MYUN2__LEXICAL__UTILS__HPP__
#define __MYUN2__LEXICAL__UTILS__HPP__

#include <string>
#include <vector>

namespace myun2
{
	namespace lexical
	{
		struct string_iterator
		{
			const char* p;
			string_iterator(const char *p_) : p(p_) {}
			const char* operator ++(int) { return p++; }
			const char* operator ++() { return ++p; }
			char operator *() const { return *p; }
		};

		struct result
		{
			::std::vector< ::std::string> l;
			bool operator << (char c) { return true; }
			bool operator << (const ::std::string &s) { l.push_back(s); return true; }
			const ::std::string& operator [] (unsigned int i) const { return l[i]; }
		};
	}
}

#endif//__MYUN2__LEXICAL__UTILS__HPP__
