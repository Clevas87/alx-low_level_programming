#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - A a function that allocates memory using malloc.
 * @b: The size to allocate.
 * Description: Write a function that allocates memory using malloc.
 *
 * Return: Always 0 (Success).
 */

void *malloc_checked(unsigned int b)
{
void *p;
p = malloc(b);
if (p == NULL)
exit(98);
return (p);
}
