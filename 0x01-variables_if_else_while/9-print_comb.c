#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - A programme that print all possible combinations of single-digit numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	int d;
	for (d = '0'; d <= '9'; d++)
	{
	putchar(d);
	if (d != '9')
	{
	putchar(',');
	
	}
	}
	putchar('\n');

	return (0);
}	
