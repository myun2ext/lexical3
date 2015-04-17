#ifndef __MYUN2__LEXICAL__REPEAT__HPP__
#define __MYUN2__LEXICAL__REPEAT__HPP__

namespace myun2
{
	namespace lexical
	{
		template <typename T>
		struct repeat
		{
			T p;
			repeat(const T& t = T()) : p(t) {}

			template <typename _Document, typename _Iterator>
			_Iterator parse(_Document& doc, _Iterator i) const
			{
				while(1)
				{
					_Iterator i_origin = i;
					i = p.parse(doc, i);
					if ( i.is_invalid() )
						return i_origin;
				}
			}
		};
	}
}

#endif//__MYUN2__LEXICAL__REPEAT__HPP__
