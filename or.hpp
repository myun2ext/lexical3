#ifndef __MYUN2__LEXICAL__OR__HPP__
#define __MYUN2__LEXICAL__OR__HPP__

namespace myun2
{
	namespace lexical
	{
		template <
			typename T1 = empty_token,
			typename T2 = empty_token,
			typename T3 = empty_token,
			typename T4 = empty_token,
			typename T5 = empty_token,
			typename T6 = empty_token,
			typename T7 = empty_token,
			typename T8 = empty_token,
			typename T9 = empty_token>
		struct or_
		{
			const T1 p1;
			const T2 p2;
			const T3 p3;
			const T4 p4;
			const T5 p5;
			const T6 p6;
			const T7 p7;
			const T8 p8;
			const T9 p9;

			or_(
				const T1& t1 = T1(),
				const T2& t2 = T2(),
				const T3& t3 = T3(),
				const T4& t4 = T4(),
				const T5& t5 = T5(),
				const T6& t6 = T6(),
				const T7& t7 = T7(),
				const T8& t8 = T8(),
				const T9& t9 = T9() ) :
				p1(t1),
				p2(t2),
				p3(t3),
				p4(t4),
				p5(t5),
				p6(t6),
				p7(t7),
				p8(t8),
				p9(t9) {}

			template <typename _Document, typename _Iterator>
			_Iterator parse(_Document& doc, _Iterator i) const
			{
				_Iterator i_origin = i;
				if ( is_empty_token<T1>::value ) return _Iterator::invalid();
				i = p1.parse(doc, i_origin); if ( i.is_valid() ) return i;
				if ( is_empty_token<T2>::value ) return _Iterator::invalid();
				i = p2.parse(doc, i_origin); if ( i.is_valid() ) return i;
				if ( is_empty_token<T3>::value ) return _Iterator::invalid();
				i = p3.parse(doc, i_origin); if ( i.is_valid() ) return i;
				i = p4.parse(doc, i_origin); if ( i.is_valid() ) return i;
				i = p5.parse(doc, i_origin); if ( i.is_valid() ) return i;
				i = p6.parse(doc, i_origin); if ( i.is_valid() ) return i;
				i = p7.parse(doc, i_origin); if ( i.is_valid() ) return i;
				i = p8.parse(doc, i_origin); if ( i.is_valid() ) return i;
				i = p9.parse(doc, i_origin); if ( i.is_valid() ) return i;
				return _Iterator::invalid();
			}
		};
	}
}

#endif//__MYUN2__LEXICAL__OR__HPP__
