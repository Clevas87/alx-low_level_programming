#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - Write a function that concatenates two strings.
 * @s1: The first string to concatenates.
 * @s2: The second string to concatenates.
 * Description: Write a function that concatenates two strings.
 *
 * Return: The strings to be concatenated.
 */

char *str_concat(char *s1, char *s2)
{
int u = 0, v = 0, w = 0, x = 0;
char *s;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[u])
u++;
while (s2[v])
v++;
x = u + v;
s = malloc((sizeof(char) * x) +1);
if (s == NULL)
return (NULL);
v = 0;
while (w < x)
{
if (w <= u)
s [w] = s1[w];
if (w >= u)
{
s[w] = s2[v];
v++;
}
w++;
}
s[w] = '\0';
return (s);
}
