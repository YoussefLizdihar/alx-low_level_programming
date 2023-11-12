#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - a function
 * Return: a value.
 * @format: this is var
 */
void print_all(const char * const format, ...)
{
va_list args;
unsigned int i = 0;
char *str;
int num;
float fnum;
char *separator = "";
va_start(args, format);
while (format && format[i])
{
switch (format[i])
{
case 'c':
printf("%s%c", separator, va_arg(args, int));
break;
case 'i':
printf("%s%d", separator, va_arg(args, int));
break;
case 'f':
printf("%s%f", separator, va_arg(args, double));
break;
case 's':
str = va_arg(args, char *);
if (str == NULL)
str = "(nil)";
printf("%s%s", separator, str);
break;
default:
i++;
continue;
}
separator = ", ";
i++;
}
printf("\n");
va_end(args);
}
