# _printf - Custom printf function

This project is a custom implementation of the C standard `printf` function. It focuses on handling specific format specifiers and producing formatted output.

## Files

### `_printf.c`
- **Function:** `_printf`
- **Description:** Produces output according to a format string. Handles the conversion specifiers `c`, `s`, and `%`.

### `print_char.c`
- **Function:** `print_char`
- **Description:** Handles the `%c` specifier by printing a single character.

### `print_string.c`
- **Function:** `print_string`
- **Description:** Handles the `%s` specifier by printing a string.

### `print_percent.c`
- **Function:** `print_percent`
- **Description:** Handles the `%%` specifier by printing a literal `%` character.

### `print_int.c`
- **Function:** `print_int`
- **Description:** Handles the `%d` and `%i` specifiers by printing integers.

### `main.h`
- **Description:** Header file containing all function prototypes and necessary includes.

## Compilation
The project is compiled using:
```sh
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c

