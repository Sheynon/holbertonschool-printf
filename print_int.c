#include "main.h"

/**
 * print_int - Prints an integer using _putchar
 * @n: Integer to print
 *
 * Return: Number of characters printed
 */
int print_int(int n)
{
	int count = 0, i = 0;
	unsigned int num;
	int digits[10];

	/* Gérer les nombres négatifs */
	if (n < 0)
	{
		_putchar('-');
		count++;
		num = -n;
	}
	else
	{
		num = n;
	}

	/* Stocker les chiffres */
	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	while (num > 0)
	{
		digits[i] = num % 10;
		num /= 10;
		i++;
	}

	/* Afficher les chiffres dans le bon ordre */
	while (i--)
	{
		_putchar(digits[i] + '0');
		count++;
	}

	return (count);
}

