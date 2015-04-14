#ifndef __MYUN2__LEXICAL__CHARACTOR__HPP__
#define __MYUN2__LEXICAL__CHARACTOR__HPP__

namespace myun2
{
	namespace lexical
	{
		template <char C>
		struct char_ {
			template <typename _Iterator>
			char parse(_Iterator i) const { return *(i++) == C ? C : '\0'; }
		};

		typedef char_<' '> space_char;
		typedef char_<'\t'> tab_char;
		typedef char_<'\r'> cr_char;
		typedef char_<'\n'> lf_char;
	}
}

#endif//__MYUN2__LEXICAL__CHARACTOR__HPP__
