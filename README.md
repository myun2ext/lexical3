# lexical3

**lexical3** is simple parser.

## Usage

```cpp
#include "lexer.hpp"
#include "string.hpp"
#include "utils.hpp"
#include <stdio.h>

using namespace myun2::lexical;

typedef sequence<
	string_with<':'>,
	char_<':'>,
	string_with<'\0'>
> colon_cutter;

int main()
{
	string_list_document r;
	colon_cutter cc;
	cc.parse(r, string_iterator("ABC:DEF"));

	printf("%s\n", r[0].c_str());
	printf("%s\n", r[1].c_str());

	return 0;
}
```

### sequence

Sequencial tokens definition. token specify in *template parameters*.

### string_with

**Any string** with terminator token specify in *template parameter*.

### char_

**Constant charactor** with *template parameter*.
