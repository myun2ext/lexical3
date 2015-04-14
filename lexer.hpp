#ifndef __MYUN2__LEXICAL__SEQUENCE__HPP__
#define __MYUN2__LEXICAL__SEQUENCE__HPP__

#include "myun2/lexical3/charactor.hpp"

namespace myun2
{
	namespace lexical
	{
		struct null_type {};

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
			typename T12 = null_type,
			typename T13 = null_type,
			typename T14 = null_type,
			typename T15 = null_type,
			typename T16 = null_type,
			typename T17 = null_type,
			typename T18 = null_type,
			typename T19 = null_type,
			typename T20 = null_type,
			typename T21 = null_type,
			typename T22 = null_type>
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
			const T18 p18;
			const T19 p19;
			const T20 p20;
			const T21 p21;
			const T22 p22;

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
				const T17& t17 = T17(),
				const T18& t18 = T18(),
				const T19& t19 = T19(),
				const T20& t20 = T20(),
				const T21& t21 = T21(),
				const T22& t22 = T22()) :
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
				p17(t17),
				p18(t18),
				p19(t19),
				p20(t20),
				p21(t21),
				p22(t22) {}

			template <typename _Input>
			bool parse(_Input p) {
				if ( !(p1.parse(*(p++)) )) return false;
				if ( !(p2.parse(*(p++)) )) return false;
				if ( !(p3.parse(*(p++)) )) return false;
				return true;
			}
		};
	}
}

#endif//__MYUN2__LEXICAL__SEQUENCE__HPP__
