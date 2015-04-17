#ifndef __MYUN2__LEXICAL__STRING__HPP__
#define __MYUN2__LEXICAL__STRING__HPP__

#include <string>

namespace myun2
{
	namespace lexical
	{
		template <typename _Terminator>
		struct string_with
		{
			template <typename _Document, typename _Iterator>
			_Iterator parse(_Document& doc, _Iterator i) const
			{
				::std::string s;
				while( _Terminator().parse(doc, i).is_invalid() )
				{
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
