#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - a function that prints "_"
 * @n: is a number
 */
void print_diagonal(int n)
{
int j = 1;
while (n >= j && n > 0)
{
putchar(' ');
if (j == n)
{
putchar('\\');
putchar('\n');
}
j++;
}
putchar('\n');
}
