#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - Calculate the length of a string.
 * @s: The string count.
 * Desciption: A function that returns the length of a string.
 * Return: Integer value
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
s++;
return (_strlen_recursion(s) + 1);
}
