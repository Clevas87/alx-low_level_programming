#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - Write a function that concatenates
 * all the arguments of your program.
 * @argc: The argument count.
 * @argv: The argument vector.
 * Description: Write a function that concatenates all
 * the arguments of your program.
 *
 * Return: ...
 */

char *argstostr(int argc, char **argv)
{
int ch = 0, u = 0, v = 0, w = 0;
char *s;
if (argc == 0 || argv == NULL)
return (NULL);
while (u < argc)
{
while (argv[u][v])
{
ch++;
v++;
}
v = 0;
u++;
}
s = malloc((sizeof(char) * ch) +argc + 1);
u = 0;
while (argv[u])
{
while (argv[u][v])
{
s[w] = argv[u][v];
w++;
v++;
}
s[w] = '\n';
v = 0;
w++;
u++;
}
w++;
s[k] = '\0';
return (s);
}
