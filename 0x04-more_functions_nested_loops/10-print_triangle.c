#include "main.h"
/**
 * print_triangle - a function
 * Return: 1 if true, 0 otherwise.
 * @size: this is a var
 */

void print_triangle(int size)
{
int i = 0;
int s = size;
while (size > 0)
{
while (i < size)
{
putchar(' ');
i++;
while (i <= s && i >= size)
{
putchar('#');
i++;
}
}
putchar('\n');
i = 0;
size--;
}
if  (size > 0)
{
putchar('\n');
}
}
