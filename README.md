# ft_printf

A custom implementation of `printf` built in C for the 42 curriculum.

## Supported conversions

- `%c` character
- `%s` string
- `%p` pointer address
- `%d` / `%i` signed integers
- `%u` unsigned integers
- `%x` / `%X` hexadecimal
- `%%` literal percent sign

## What it demonstrates

- Variadic functions with `stdarg.h`
- Format-string parsing
- Number conversion and base formatting
- Careful return-value accounting
- Building a reusable static library

## Build

```bash
make
```

This produces:

```text
libftprintf.a
```

## Use in another program

```bash
cc main.c libftprintf.a
```

Include:

```c
#include "ft_printf.h"
```

## Useful commands

```bash
make clean
make fclean
make re
```
