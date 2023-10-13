#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - a function that prints "_"
 * @n: is a number
 */
void print_diagonal(int n)
{
int j = 1;
int i = 1;
if (n <= 0)
{
putchar('\n');
}

else if (n > 0 && j <= n)
{
while (j <= n)
{
while (i <= j)
{
putchar(' ');
putchar('\\');
putchar('\n');
i++;
}
j++;
i = 1;
}
}
}
