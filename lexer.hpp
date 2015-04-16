#ifndef __MYUN2__LEXICAL__LEXER__HPP__
#define __MYUN2__LEXICAL__LEXER__HPP__

#include "string.hpp"
#include "utils.hpp"

namespace myun2
{
	namespace lexical
	{
		struct empty_token {
			template <typename _Iterator>
			bool parse(_Iterator& i) const { return true; }
		};

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
			typename T16 = empty_token>

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
				const T16& t16 = T16() ) :
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
				p16(t16) {}

			result parse(const char* s)
			{
				string_iterator si(s);
				result doc;

				if ( !(doc << p1.parse(si) )) return doc;
				if ( !(doc << p2.parse(si) )) return doc;
				if ( !(doc << p3.parse(si) )) return doc;
				if ( !(doc << p4.parse(si) )) return doc;
				if ( !(doc << p5.parse(si) )) return doc;
				if ( !(doc << p6.parse(si) )) return doc;
				if ( !(doc << p7.parse(si) )) return doc;
				if ( !(doc << p8.parse(si) )) return doc;
				if ( !(doc << p9.parse(si) )) return doc;
				if ( !(doc << p10.parse(si) )) return doc;
				if ( !(doc << p11.parse(si) )) return doc;
				if ( !(doc << p12.parse(si) )) return doc;
				if ( !(doc << p13.parse(si) )) return doc;
				if ( !(doc << p14.parse(si) )) return doc;
				if ( !(doc << p15.parse(si) )) return doc;
				if ( !(doc << p16.parse(si) )) return doc;

				return doc;
			}
		};
	}
}

#endif//__MYUN2__LEXICAL__LEXER__HPP__
