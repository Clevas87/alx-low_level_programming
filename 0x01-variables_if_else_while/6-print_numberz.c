#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - A programme that prints single digits num of base 10 starting from 0
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int d;

	for (d = '0'; d <= '9'; d++)
	putchar(d);
	putchar('\n');

	return (0);
}
