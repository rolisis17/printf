# ft_printf

`ft_printf` is a custom implementation of the C `printf` function. It builds a reusable static library while practicing variadic arguments, format-string parsing, numeric conversion, and exact return-value accounting.

## Supported conversions

```text
%c   character
%s   string
%p   pointer address
%d   signed decimal
%i   signed integer
%u   unsigned decimal
%x   lowercase hexadecimal
%X   uppercase hexadecimal
%%   literal percent
```

## Build

```bash
make
```

This produces:

```text
libftprintf.a
```

## Use in another project

```bash
cc main.c libftprintf.a
```

Include:

```c
#include "ft_printf.h"
```

## Repository structure

```text
ft_printf.c       Main dispatcher
ft_flags.c        Format parsing
ft_count.c        Output length accounting
ft_putchar.c      Character output
ft_putstr.c       String output
ft_putnbr.c       Signed integer output
ft_putunsigned.c  Unsigned integer output
ft_puthexa.c      Hexadecimal output
ft_putaddress.c   Pointer output
```

## Technical highlights

- Uses `stdarg.h` to process variadic arguments
- Splits conversions into focused helper files
- Tracks the number of printed characters like the real `printf`
- Builds a static archive for reuse

## Useful commands

```bash
make clean
make fclean
make re
```

## Skills demonstrated

- Variadic functions
- Format parsing
- Base conversion
- Library creation
- C API compatibility thinking
