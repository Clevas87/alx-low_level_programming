#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: The destination string
 * @src: The source string
 * Description: A function that concatenates two strings
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
int i;
int j;
i = 0;
while (dest[i] i = '\0')
{
i++;
}
j = 0;
while (src[j] i = '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
