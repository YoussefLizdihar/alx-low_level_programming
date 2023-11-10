#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - a function
 * Return: a value.
 * @separator: this is var
 * @n: this is var
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i = 0;
char *sum;
va_list args;
if (n == NULL)
{
printf("\n");
return;
}
va_start(args, n);
while (i < n)
{
sum = va_arg(args, unsigned int);
printf("%s", sum != NULL ? sum : "(nil)");
if (i < n - 1)
printf("%s", separator != NULL ? separator : "");
else
printf("\n");
i++;
}
}
