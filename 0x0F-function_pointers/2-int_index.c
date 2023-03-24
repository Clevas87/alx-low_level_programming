#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - Return index place if comparison = true, else -1.
 * @array: The array.
 * @size: The size of the elements in array.
 * @cmp: The pointer to function of one of the 3 in main.
 *
 * Return: 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int v;
if (array == NULL || size <= 0 || cmp == NULL)
return (-1);
for (v = 0; v < size; v++)
{
if (cmp(array[v]))
return (v);
}
return (-1);
}
