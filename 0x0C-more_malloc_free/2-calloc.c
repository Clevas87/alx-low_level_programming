#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - ...
 * @nmemb: Number of members.
 * @size: Size.
 *
 * Return: ...
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
int u = 0, v = 0;
char *p;
if (nmemb == 0 || size == 0)
return (NULL);
v = nmemb * size;
p = malloc(v);
if (p == NULL)
return (NULL);
while (u < v)
{
p[u] = 0;
u++;
}
return (p);
}
