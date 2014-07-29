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
five_roman(); // V
five_morseCode(); // di-di-di-di-dit
five_negative(); // -5
five_loud(); // FIVE
```

##### 5 goes multilingual
```C
five_dutch(); // vijf
five_english(); // five
five_french(); // cinq
five_german(); // fünf
five_irish(); // cúig
five_italian(); // cinque
five_spanish(); // cinco
five_swedish(); // fem
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
