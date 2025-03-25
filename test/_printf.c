#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - Custom printf function that handles %c, %s, and %%
 * @format: The format string
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
    va_list args;
    int count = 0;

    if (format == NULL)
        return (-1);

    va_start(args, format);

    while (*format)
    {
        if (*format == '%' && (*(format + 1) == 'c'))
        {
            char c = va_arg(args, int);
            count += write(1, &c, 1);
            format += 2;
        }
        else
        {
            count += write(1, format, 1);
            format++;
        }
    }

    va_end(args);
    return (count);
}
