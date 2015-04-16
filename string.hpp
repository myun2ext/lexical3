#ifndef __MYUN2__LEXICAL__STRING__HPP__
#define __MYUN2__LEXICAL__STRING__HPP__

#include <string>

namespace myun2
{
	namespace lexical
	{
		template <char C>
		struct char_ {
			template <typename _Document, typename _Iterator>
			_Iterator parse(_Document& doc, _Iterator i) const
			{
				_Iterator i_origin = i;
				char c = *(i++);

				if ( c == C ) {
					doc << c;
					return i;
				}
				else
				{
					return _Iterator::invalid();
				}
			}
		};

		template <char _Terminator>
		struct string_with
		{
			template <typename _Document, typename _Iterator>
			_Iterator parse(_Document& doc, _Iterator& i) const
			{
				::std::string s;
				while(*i != _Terminator) {
					if ( *i == '\0' ) return _Iterator::invalid();
					s += *i;
					i++;
				}
				doc << s;
				return i;
			}
		};
	}
}

#endif//__MYUN2__LEXICAL__STRING__HPP__
