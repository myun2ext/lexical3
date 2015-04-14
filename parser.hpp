#ifndef __MYUN2__LEXICAL__PARSER__HPP__
#define __MYUN2__LEXICAL__PARSER__HPP__

namespace myun2
{
	namespace lexical
	{
		template <typename _document, typename _Syntax, typename _Input>
		_document parse(_Input p) {
			_Syntax syntax;
			while(p++) { syntax.eat(*p); }
		};
	}
}

#endif//__MYUN2__LEXICAL__PARSER__HPP__
