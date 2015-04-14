#ifndef __MYUN2__LEXICAL__CHARACTOR__HPP__
#define __MYUN2__LEXICAL__CHARACTOR__HPP__

namespace myun2
{
	namespace lexical
	{
		template <char C>
		struct char_ {
			typedef bool _Result;
			template <typename _Input> bool parse(_Input p) { return *p == C; }
		};

		typedef char_<' '> space_char;
		typedef char_<'\t'> tab_char;
		typedef char_<'\r'> cr_char;
		typedef char_<'\n'> lf_char;
	}
}

#endif//__MYUN2__LEXICAL__CHARACTOR__HPP__
