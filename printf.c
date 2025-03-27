#include "main.h"
#include <stdarg.h>
#include <stddef.h>
#include <string.h>

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
		return (-1);

	while (*format)
	{
		if (*format == '%')
		{
			format++;

			if (*format == '\0')
				return (-1);
			else if (*format == '%')
				i += print_percent();
			else if (*format == 'c')
				i += print_char(va_arg(args, int));
			else if (*format == 's')
				i += print_string(va_arg(args, char *));
			else
			{
				i += _putchar('%');
				i += _putchar(*format);
			}
		}
		else
			i += _putchar(*format);
		format++;
	}
	va_end(args);
	return (i);
}
