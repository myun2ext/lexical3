#ifndef __MYUN2__LEXICAL__CHARACTOR__HPP__
#define __MYUN2__LEXICAL__CHARACTOR__HPP__

namespace myun2
{
	namespace lexical
	{
		template <char C>
		struct char_ {
			template <typename _Iterator>
			char parse(_Iterator& i) const { return *(i++) == C ? C : '\0'; }
		};
	}
}

#endif//__MYUN2__LEXICAL__CHARACTOR__HPP__
