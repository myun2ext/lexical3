#ifndef __MYUN2__LEXICAL__STRING__HPP__
#define __MYUN2__LEXICAL__STRING__HPP__

#include <string>

namespace myun2
{
	namespace lexical
	{
		template <typename _End>
		struct string_with
		{
			template <typename _Iterator>
			::std::string parse(_Iterator i) const {
				::std::string s;
				while(*i == _End || *i == '\0') {
					i++;
					s += *i;
				}
				return s;
			}
		};
	}
}

#endif//__MYUN2__LEXICAL__STRING__HPP__