#include "main.h"
#include <stdarg.h>

/**
 * _printf - Produces output according to a format
 * @format: Format string containing conversion specifiers
 *
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, count = 0;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			i++;
			if (format[i] == 'c')
				count += _putchar(va_arg(args, int));
			else if (format[i] == 's')
				count += print_string(va_arg(args, char *));
			else if (format[i] == '%')
				count += _putchar('%');
			else if (format[i] == 'd' || format[i] == 'i')
				count += print_int(va_arg(args, int));
			else
			{
				count += _putchar('%');
				count += _putchar(format[i]);
			}
		}
		else
			count += _putchar(format[i]);
		i++;
	}

	va_end(args);
	return (count);
}
