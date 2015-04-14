#ifndef __MYUN2__LEXICAL__STRING__HPP__
#define __MYUN2__LEXICAL__STRING__HPP__

#include <string>

namespace myun2
{
	namespace lexical
	{
		template <char C>
		struct char_ {
			template <typename _Iterator>
			char parse(_Iterator& i) const { return *(i++) == C ? C : '\0'; }
		};

		template <char _Terminator>
		struct string_with
		{
			template <typename _Iterator>
			::std::string parse(_Iterator& i) const {
				::std::string s;
				while(*i != _Terminator && *i != '\0') {
					s += *i;
					i++;
				}
				return s;
			}
		};
	}
}

#endif//__MYUN2__LEXICAL__STRING__HPP__
