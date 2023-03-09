#include "main.h"
#include <stdio.h>

/**
 * _sqrt - Calculate natural square root.
 * @n: The number to calculate the square root.
 * @i: Iterate number
 * Description: A function that returns the natural square root of a number.
 * Return: The natural square root.
 */

int _sqrt(int n, int i)
{
int sqrt = i + i;
if (sqrt > n)
return (-1);
if (sqrt == n)
return (i);
return (_sqrt(n, i + 1));
}
