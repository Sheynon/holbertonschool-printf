#include "main.h"
#include <stdarg.h>
#include <stddef.h>
#include <string.h>
#include <unistd.h>

/**
 * _printf - Custom Printf function
 * @format: The format string containing text and % directives
 *
 * Return: Number of character printed
 */

int _printf(const char *format, ...)
{
	int i = 0;

	va_list args;

	va_start(args, format);

	if (format == NULL)
		return (-1); // check if format isn't NULL, if it is return -1 as an error

	while (*format)
	{
		if (*format == '%') // if function to check the first character of format
		{
			format++;

			if (*format == 's') // if function to check the second character of format
				i += print_string(va_arg(args, char *));
			// below that line call your function with else if
		}
		else
			i += _putchar(*format);
		format++;
	}
	va_end(args);
	return (i);
}
