#ifndef __MYUN2__LEXICAL__CHARACTOR__HPP__
#define __MYUN2__LEXICAL__CHARACTOR__HPP__

namespace myun2
{
	namespace lexical
	{
		template <char C>
		struct char_ {};

		typedef char_<' '> space_char;
		typedef char_<'\t'> tab_char;
		typedef char_<'\r'> cr_char;
		typedef char_<'\n'> lf_char;

		template <typename _document, char C, typename _Input>
		_document& parse<_document, char_<C>, _Input> (_document& doc, const char_<C> c, _Input p) {
			doc << C == *p;
			return doc;
		}
	}
}

#endif//__MYUN2__LEXICAL__CHARACTOR__HPP__
