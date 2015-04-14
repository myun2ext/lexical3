# lexical3

**lexical3** は非常にシンプルな簡易パーサです。

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

パーサを定義します。(テンプレートパラメータにより)

### string_with

テンプレートパラメータに指定される文字までの文字列を読み込みます

### char_

何らかのキャラ(区切り文字等)
