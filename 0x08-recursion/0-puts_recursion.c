#include "main.h"
 /**
  * _puts_recursion - A function that print a string follewed by a line
  * @s: The string to print
  * Return: Nothing
  */

void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
_putchar(*s);
s++;
_puts_recursion(s);
}
