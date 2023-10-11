#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - a function that adds two integers.
 * @n: a num
 * Return: success 1.
 */
void print_to_98(int n)
{
while (n < 98)
{
printf("%d", n);
if (n < 98)
{
printf(", ");
}
n++;
}
while (n > 98)
{
printf("%d", n);
if (n > 98)
{
printf(", ");
}
n--;
}
if (n = 98)
{
printf("%d", n);
printf(", ");
printf("\n");
}
else
{
printf("\n");
}
return;
}
