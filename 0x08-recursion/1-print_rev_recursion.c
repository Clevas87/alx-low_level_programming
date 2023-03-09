#include "main.h"

/**
 * _print_rev_recursion - Print a string in reverse.
 * @s: The string in reverse.
 * Description: A function that prints a string in reverse.
 * Return: No return.
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}
s++;
_print_rev_recursion(s);
s--;
_putchar(*s);
}
