#include "main.h"
#include <unistd.h>

/**
 * print_char - Print a character
 * @c: The character to print
 * Return: Number of characters printed (always 1)
 */
int print_char(char c)
{
    return (write(1, &c, 1));  // Écriture du caractère sur la sortie standard (stdout)
}
