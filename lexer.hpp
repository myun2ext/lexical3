#ifndef __MYUN2__LEXICAL__LEXER__HPP__
#define __MYUN2__LEXICAL__LEXER__HPP__

#include "string.hpp"
#include "utils.hpp"

namespace myun2
{
	namespace lexical
	{
		struct null_type {
			template <typename _Iterator>
			bool parse(_Iterator& i) const { return true; }
		};

		template <
			typename T1 = null_type,
			typename T2 = null_type,
			typename T3 = null_type,
			typename T4 = null_type,
			typename T5 = null_type,
			typename T6 = null_type,
			typename T7 = null_type,
			typename T8 = null_type,
			typename T9 = null_type,
			typename T10 = null_type,
			typename T11 = null_type,
			typename T12 = null_type>

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
				const T12& t12 = T12() ) :
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
				p12(t12) {}

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

				return doc;
			}
		};
	}
}

#endif//__MYUN2__LEXICAL__LEXER__HPP__
