#include "main.h"
#include <stdio.h>
/**
  * _puts_recursion - Print a string followed by a line.
  * Description: A function that prints a string, followed by a new line.
  * @s: The string to print.
  * Return: No return.
  *
  */
void _puts_recursion(char *s)
{
if (*s != '\0')
{
putchar(*s);
_puts_recursion(s + 1);
}
else
putchar('\n');
}
