#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Write a function that returns a pointer to allocated space in mem.
 * @str: The string to copy.
 * Description: Write a function that returns a pointer
 * to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * Return: The string to be copied.
 */

char *_strdup(char *str)
{
int u = 0, v = 1;
char *s;
if (str == NULL)
return (NULL);
while (str[v])
{
v++;
}
s = malloc((sizeof(char) * v) +1);
if (s == NULL)
return (NULL);
while (u < v)
{
s[u] = str[u];
u++;
}
s[u] = '\0';
return (s);
}
