#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * main - A program that adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
int n;
unsigned int m, sum = 0;
char *z;
if (argc > 1)
{
for (n = 1; n < argc; n++)
{
z = argv[n];
for (m = 0; m < strlen(z); m++)
{
if (z[m] < 48 || z[m] > 57)
{
printf("Error\n");
return (1);
}
}
sum += atoi(z);
z++;
}
printf("%d\n", sum);
}
else
{
printf("0\n");
}
return (0);
}
