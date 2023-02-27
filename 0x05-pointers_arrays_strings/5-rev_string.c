#include "main.h"

/**
 * rev_string - A function that reverse a string
 * @str: The string to be modified
 * Return: void
 */

void rev_string(char *str)
{
int len = 0, index = 0;
char tmp;
while (str[index++])
len++;
for (index = len - 1; index >= len / 2; index--)
{
tmp = str[index];
str[index] = str[len - index - 1];
str[len - index - 1] = tmp;
}
}
