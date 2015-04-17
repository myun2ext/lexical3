#ifndef __MYUN2__LEXICAL__OPTIONAL__HPP__
#define __MYUN2__LEXICAL__OPTIONAL__HPP__

namespace myun2
{
	namespace lexical
	{
		template <typename T>
		struct optional
		{
			T p;
			optional(const T& t = T()) : p(t) {}

			template <typename _Document, typename _Iterator>
			_Iterator parse(_Document& doc, _Iterator i) const
			{
				_Iterator i_origin = i;
				i = p.parse(doc, i);
				if ( i.is_valid() )
					return i;
				else
					return i_origin;
			}
		};
	}
}

#endif//__MYUN2__LEXICAL__OPTIONAL__HPP__
