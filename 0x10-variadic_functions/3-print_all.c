#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - a function
 * Return: a value.
 * @format: this is var
 */
void print_all(const char * const format, ...)
{
unsigned int i = 0;
unsigned int j = 0;
unsigned int xx = 0;
va_list args;
if (!format)
{
printf("\n");
return;
}
while (*format != '\0')
j++;
va_start(args, format);

while (xx <= j)
{
while (i <= j)
{
if (format[i] == 'i')
{
int x = va_arg(args, int);
printf("%d\n", x);
}
if (format[i] == 'c')
{
char x = va_arg(args, int);
printf("%c\n", x);
}
i++;
}
xx++;
}
}
