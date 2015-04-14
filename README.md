# lexical3

**lexical3** �͔��ɃV���v���ȊȈՃp�[�T�ł��B

## Usage

```cpp
#include "lexer.hpp"
#include <stdio.h>

using namespace myun2::lexical;

typedef sequence<
	string_with<':'>,
	char_<':' >,
	string_with<'\0'>
> example_parser;

int main()
{
	example_parser parser;
	result r = parser.parse("ABC:DEF");
	printf("%s\n", r[0].c_str());
	printf("%s\n", r[1].c_str());

	return 0;
}
```

### sequence

�p�[�T���`���܂��B(�e���v���[�g�p�����[�^�ɂ��)

### string_with

�e���v���[�g�p�����[�^�Ɏw�肳��镶���܂ł̕������ǂݍ��݂܂�

### char_

���炩�̃L����(��؂蕶����)
