#include <unistd.h>
#include "main.h"

/**
 * _printf - Function that outputs a formatted string,
 *           handling the %% specifier.
 * @format: The format string containing the specifiers.
 * 
 * Return: The number of characters printed.
 */
int _printf(const char *format, ...)
{
	int count = 0; /* inittiales count*/
	const char *ptr; /* ptr ce trouve dans format */

	for (ptr = format; *ptr != '\0'; ptr++)
	{
			if (*ptr == '%' && *(ptr + 1) == '%')
			{

					write(1, "%", 1);
					count++;
					ptr++;
			}
			else
			{
					write(1, ptr, 1);

					count++;
			}
	}
			return (count);
}
