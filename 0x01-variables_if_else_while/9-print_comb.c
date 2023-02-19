#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - A programme that prints combinations of single-digit num
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
	putchar(a + '0');
	if (a < 9)
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
