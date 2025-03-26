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
	int count = 0; // iinialise count
	const char *ptr; // ptr is the character string

	for (ptr = format; *ptr != '\0'; ptr++) // initializes the character string
	{
			if (*ptr == '%' && *(ptr + 1) == '%') //displays character 1 if % or 2 if %%
			{

					write(1, "%", 1); //discplay the characters
					count++;
					ptr++;
			}
			else
			{
					write(1, ptr, 1); //displays a normal character

					count++;
			}
	}
			return (count); //returns the value
}
