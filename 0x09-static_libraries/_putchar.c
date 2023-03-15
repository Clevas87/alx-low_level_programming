#include <unistd.h>

/**
 * _putchar - Write the program that prints character c.
 * @c: The character to print.
 *
 * Return: 1 if true.
 * On error, -1 is returned and error corrected accordingly.
 */
int _putchar(charc)
{
return (write(1, &c, 1));
}
