#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - a function that prints "_"
 * @n: is a number
 */
void print_diagonal(int n)
{
int j = 1;
int i = 0;
if (n <= 0)
{
putchar('\n');
}
else
{
while (j <= n)
{
while (i < j)
{
putchar(' ');
i++;
}
putchar('\\');
putchar('\n');
j++;
i = 0;
}
}
}
