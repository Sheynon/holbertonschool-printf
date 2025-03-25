#include "main.h"
#include <stddef.h>

/**
 * print_string - Function to print a string in a custom printf
 * @str: THe string to print
 *
 * Return: Return the number of character printed
 */

int print_string(char *str)
{
	int i = 0;

	if (str == NULL)
		str = "(null)";

	while (*str)
	{
		i += _putchar(*str);
		str++;
	}
	return (i);
}
