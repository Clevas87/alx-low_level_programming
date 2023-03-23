#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - A function that prints anything.
 * @format: The list of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
int v = 0;
char *str, *sep = "";
va_list list;
va_start(list, format);
if (format)
{
while (format[v])
{
switch (format[v])
{
case 'c':
printf("%s%c", sep, va_arg(list, int));
break;
case 'v':
printf("%s%d", sep, va_arg(list, int));
break;
case 'f':
printf("%s%f", sep, va_arg(list, double));
break;
case 's':
str = va_arg(list, char*);
if (!str)
str = "(nil)";
printf("%s%s", sep, str);
break;
default:
v++;
continue;
}
sep = ",";
v++;
}
}
printf("\n");
va_end(list);
}
