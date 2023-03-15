#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - ...
 * @width: ...
 * @height: ...
 * Description: Write a function that returns a pointer
 * to a 2 dimensional array of integers.
 *
 * Return: ...
 */

int **alloc_grid(int width, int height)
{
int u, v, w, x;
int **a;
if (width <= 0 || height <= 0)
return (NULL);
a = malloc(sizeof(int *) * height);
if (a == NULL)
{
free(a);
return (NULL);
}
for (u = 0; u < height; u++)
{
a[u] = malloc(sizeof(int) * width);
if (a[u] == NULL)
{
for (v = u; v >= 0; v--)
{
free(a[v]);
}
free(a);
return (NULL);
}
}
for (w = 0; w < height; w++)
{
for (x = 0; x < width; x++)
{
a[w][x] = 0;
}
}
return (a);
}
