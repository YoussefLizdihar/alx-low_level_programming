#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - a function that adds two integers.
 * @n: a num
 * Return: success 1.
 */
void print_to_98(int n)
{
if (n <= 98)
{
while (n <= 98)
{
printf("%d", n);
if (n < 98)
{
printf(", ");
}
n++;
}
}
else
{
while (n >= 98)
{
printf("%d", n);
if (n > 98)
{
printf(", ");
}
n--;
}
}
printf("\n");
return;
}
