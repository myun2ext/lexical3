#ifndef __MYUN2__LEXICAL__LEXER__HPP__
#define __MYUN2__LEXICAL__LEXER__HPP__

namespace myun2
{
	namespace lexical
	{
		struct empty_token {
			template <typename _Document, typename _Iterator>
			_Iterator parse(const _Document& doc, const _Iterator& i) const { return i; }
		};

		template <typename T>
		struct is_empty_token { static const bool value = false; };
		template <> struct is_empty_token<empty_token> { static const bool value = true; };

		template <
			typename T1 = empty_token,
			typename T2 = empty_token,
			typename T3 = empty_token,
			typename T4 = empty_token,
			typename T5 = empty_token,
			typename T6 = empty_token,
			typename T7 = empty_token,
			typename T8 = empty_token,
			typename T9 = empty_token,
			typename T10 = empty_token,
			typename T11 = empty_token,
			typename T12 = empty_token,
			typename T13 = empty_token,
			typename T14 = empty_token,
			typename T15 = empty_token,
			typename T16 = empty_token,
			typename T17 = empty_token>

		struct sequence
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
			const T10 p10;
			const T11 p11;
			const T12 p12;
			const T13 p13;
			const T14 p14;
			const T15 p15;
			const T16 p16;
			const T17 p17;

			sequence(
				const T1& t1 = T1(),
				const T2& t2 = T2(),
				const T3& t3 = T3(),
				const T4& t4 = T4(),
				const T5& t5 = T5(),
				const T6& t6 = T6(),
				const T7& t7 = T7(),
				const T8& t8 = T8(),
				const T9& t9 = T9(),
				const T10& t10 = T10(),
				const T11& t11 = T11(),
				const T12& t12 = T12(),
				const T13& t13 = T13(),
				const T14& t14 = T14(),
				const T15& t15 = T15(),
				const T16& t16 = T16(),
				const T17& t17 = T17() ) :
				p1(t1),
				p2(t2),
				p3(t3),
				p4(t4),
				p5(t5),
				p6(t6),
				p7(t7),
				p8(t8),
				p9(t9),
				p10(t10),
				p11(t11),
				p12(t12),
				p13(t13),
				p14(t14),
				p15(t15),
				p16(t16),
				p17(t17) {}

			template <typename _Document, typename _Iterator>
			_Iterator parse(_Document& doc, _Iterator i) const
			{
				i = p1.parse(doc, i); if ( i.is_invalid() ) return i;
				i = p2.parse(doc, i); if ( i.is_invalid() ) return i;
				i = p3.parse(doc, i); if ( i.is_invalid() ) return i;
				i = p4.parse(doc, i); if ( i.is_invalid() ) return i;
				i = p5.parse(doc, i); if ( i.is_invalid() ) return i;
				i = p6.parse(doc, i); if ( i.is_invalid() ) return i;
				i = p7.parse(doc, i); if ( i.is_invalid() ) return i;
				return i;
			}
		};
	}
}

#endif//__MYUN2__LEXICAL__LEXER__HPP__
