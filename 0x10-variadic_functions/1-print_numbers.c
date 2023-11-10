#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - a function
 * Return: a value.
 * @separator: this is var
 * @n: this is var
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i = 0;
int sum = 0;
va_list args;
if (n == 0)
{
printf("\n");
return;
}
va_start(args, n);
while (i < n)
{
sum = va_arg(args, unsigned int);
printf("%d", sum);
if (i < n - 1)
printf("%s", separator != NULL ? separator : "");
else
printf("\n");
i++;
}
}
