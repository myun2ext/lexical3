#ifndef __MYUN2__LEXICAL__PRESETS__XML__RULE__HPP__
#define __MYUN2__LEXICAL__PRESETS__XML__RULE__HPP__

#include "lexer.hpp"
#include "string.hpp"
#include "charactor.hpp"
#include "or.hpp"
#include "utils.hpp"

namespace myun2
{
	namespace lexical
	{
		namespace xml
		{
			namespace rule_
			{
				typedef sequence<char_<'<'>, string_with<char_<'>'>, char_<'>'> > tag;
			}
		}
	}
}

#endif//__MYUN2__LEXICAL__PRESETS__XML__RULE__HPP__
