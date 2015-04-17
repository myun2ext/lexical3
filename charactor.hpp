#ifndef __MYUN2__LEXICAL__CHARACTOR__HPP__
#define __MYUN2__LEXICAL__CHARACTOR__HPP__

namespace myun2
{
	namespace lexical
	{
		template <char C>
		struct char_ {
			static const char charactor = C;
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

		typedef char_<' '> space_char;
		typedef char_<'\t'> tab_char;
		typedef char_<'\r'> cr_char;
		typedef char_<'\n'> lf_char;
	}
}

#endif//__MYUN2__LEXICAL__CHARACTOR__HPP__
