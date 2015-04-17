#ifndef __MYUN2__LEXICAL__NOT__HPP__
#define __MYUN2__LEXICAL__NOT__HPP__

namespace myun2
{
	namespace lexical
	{
		template <typename T>
		struct not_
		{
			T p;
			not_(const T& t = T()) : p(t) {}

			template <typename _Document, typename _Iterator>
			_Iterator parse(_Document& doc, _Iterator i) const
			{
				_Iterator i_origin = i;
				i = p.parse(doc, i);
				if ( i.is_invalid() )
					return i_origin;
				else
					return _Iterator::invalid();
			}
		};
	}
}

#endif//__MYUN2__LEXICAL__NOT__HPP__
