#include <stdio.h>
#include <stdlib.h>
/**
 * main - A programme that prints the alphabets in lowercase and uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int ch = 'a';
int CH = 'A';

while (ch <= 'z')
{
putchar(ch)
ch++;
}
while (CH <= 'Z')
{
putchar(CH);
CH++;
}
putchar('\n')
return (0);
}
