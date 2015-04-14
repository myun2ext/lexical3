#ifndef __MYUN2__LEXICAL__PARSER__HPP__
#define __MYUN2__LEXICAL__PARSER__HPP__

namespace myun2
{
	namespace lexical
	{
		template <typename _Document, typename _Syntax, typename _Input>
		_Document parse(_Input p) {
			return parse(_Document(), _Syntax(), p); }
	}
}

#endif//__MYUN2__LEXICAL__PARSER__HPP__
