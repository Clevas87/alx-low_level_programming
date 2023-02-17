#include <stdio.h>
/**
  * main - Prints size of various data types
  * Prints type of comp compiled on 
  * Return: Always 0.
  */
int main(void)
{
	printf("Size of a char: %zu bytes\n",sizeof(char));
	printf("Size of int: %zu bytes\n",sizeof(int));
	printf("Size of long int: %zu bytes\n",sizeof(long int));
	printf("Size of long long int: %zu bytes\n",sizeof(long long int));
	printf("Size of float %zu bytes\n",sizeof(float));
	return (0);
}
