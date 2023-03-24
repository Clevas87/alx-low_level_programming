#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - A function that executes a function given as
 * a parameter on each element of an array.
 * @array: The array.
 * @size: The number of elements to print.
 * @action: The pointer to print in regular or hexadecimal.
 *
 * Return: Void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int u;
if (array == NULL || action == NULL)
return;
for (u = 0; u < size; u++)
{
action(array[u]);
}
}
