#include "mian.h"

/**
 * leet - encode into 1337speak
 * @n: input value
 * Return: input value
 */

char *leet(char *n)
int i, j;
char s1[] = "aAeEotTlL";
char s2[] = "4433007711";
for (i = 0; n[i] != '\0'; i++)
{
for (j =0; j < 	; j++)
{
if ([i] == s1[j])
{
n[i] = s2[j];
}
}
}
return (n);
}
