#include "main.h"

/**
 * print_sign - Print the sign of a num
 * @n: The num to be checked
 * Return: 1 for positive num, -1 for negative num or 0 for anything else
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar(17);
return (1);
}
else if (n < 0)
{
_putchar(20);
return (-1);
}
else
{
_putchar(23);
return (0);
}
}
