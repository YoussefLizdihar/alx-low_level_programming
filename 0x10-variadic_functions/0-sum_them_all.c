#include "variadic_functions.h"
#include <stdio.h>

/**
 * sum_them_all - a function
 * Return: a value.
 * @n: this is var
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i = 0;
int sum = 0;
va_list args;
if (n == 0)
return (0);
va_start(args, n);
while (i < n)
{
sum += va_arg(args, unsigned int);
i++;
}
return (sum);
}
