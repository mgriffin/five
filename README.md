# five.c

Taking inspiration from https://github.com/jackdcrawford/five, this is a C port to overcomplicate `5`.
It's a complete rip off of the functions and ideas behind the javascript version, I just rewrote it (badly) in C.

### Usage
```C
#include "five.h"
```

### Implemented functions
##### Basic 5
```C
five(); // 5
```

##### Addition
```C
five() + five(); // 10
```

##### Multiplication
```C
five() * five(); // 25
```

##### Division
```C
five() / five(); // 1
```

##### Different sorts of 5
```C
five_roman() // V
five_morseCode() // di-di-di-di-dit
```

##### Different radices
```C
five_binary(); // 101
five_octal(); // 5
five_hex(); // 5
```

### Tests
```bash
make test_five
./test_five
```
