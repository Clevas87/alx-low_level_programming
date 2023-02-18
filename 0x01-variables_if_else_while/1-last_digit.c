#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - A programme that assign numbers to variables n
 *
 * Return: Always 0 (Success)
 *
 */
int main(voi)
{
	int n;
	int no;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is ",);
	no = n % 10;
	if (no > 5)
	{	
		printf("%d and is greater than 5\n", no);

	}
	 
	else if ((no < 6) && (no < 0));
	{
		printf("%d and is less than 6 and not 0\n", no);
	}
	
	else
	{
		printf("%d and is 0\n", no);
	}
	return (0);
}	


