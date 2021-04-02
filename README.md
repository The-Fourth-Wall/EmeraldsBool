# Bool

A simplistic boolean data type

# Installation

`em build lib`

## Usage

`touch test.c`

```c
#include "Bool.h"

int main(void) {
    bool value = true;
    bool fvalue = false;
    if(value) {
        if(!fvalue) {
            printf("%s\n", "42");
        }
    }
}
```

`clang test.c`
`./a.out`

## Development

## Contributing

1. Fork it (<https://github.com/EmeraldsFramework/Bool/fork>)
2. Create your feature branch (`git checkout -b my-new-feature`)
3. Commit your changes (`git commit -am 'Add some feature'`)
4. Push to the branch (`git push origin my-new-feature`)
5. Create a new Pull Request

## Contributors

- [Oblivious-Oblivious](https://github.com/Oblivious-Oblivious) - creator and maintainer
