#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - a function that prints "_"
 * @n: is a number
 */
void print_diagonal(int n)
{
int j = 1;
if (n <= 0)
{
putchar('\n');
}
else
{
while (j <= n)
{
if (j < n)
{
putchar(' ');
}
else if (j == n)
{
putchar('\\');
putchar('\n');
}
j++;
}
}
}
