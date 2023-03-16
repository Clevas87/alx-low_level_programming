#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * array_range - ...
 * @min: ...
 * @max: ...
 *
 * Return: Integer value.
 */

int *array_range(int min, int max)
{
int *a, x = 0;
if (min > max)
return (NULL);
a = malloc((sizeof(int) * (max - min)) + sizeof(int));
if (a == NULL)
return (NULL);
while (min <= max)
{
a[x] = min;
x++;
min++;
}
return (a);
}
