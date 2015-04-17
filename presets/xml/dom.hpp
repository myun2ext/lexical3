#ifndef __MYUN2__LEXICAL__PRESETS__XML__DOM__HPP__
#define __MYUN2__LEXICAL__PRESETS__XML__DOM__HPP__

#include <string>
#include <vector>

namespace myun2
{
	namespace lexical
	{
		namespace xml
		{
			struct attribute {
				::std::string name;
				::std::string value;
			};
			
			struct tag {

			};
			
			struct document {
				tag root_tag;
			};
		}
	}
}

#endif//__MYUN2__LEXICAL__PRESETS__XML__DOM__HPP__
