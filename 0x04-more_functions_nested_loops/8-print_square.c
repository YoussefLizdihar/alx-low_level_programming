#include "main.h"
#include <stdio.h>
/**
 * print_square - a function that square
 * @size: is a number
 */
void print_square(int size)
{
int j = 0;
int i = 0;
if (size <= 0)
{
putchar('\n');
}
else
{
while (size > i)
{
while (size > j)
{
putchar(35);
j++;
}
putchar('\n');
j = 0;
i++;
}
}
}
