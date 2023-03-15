#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - ...
 * @grid: ...
 * @height: ...
 * Description: Write a function that frees a 2 dimensional
 * grid previously created by your alloc_grid function.
 *
 * Return: ...
 */

void free_grid(int **grid, int height)
{
int u;
for (u = 0; u < height; u++)
{
free(grid[u]);
}
free(grid);
}
