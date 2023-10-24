#include "main.h"

/**
 * print_diagsums - a function
 * Return: 1 if true, 0 otherwise.
 * @a: this is a var
 * @size: this is a var
 */

void print_diagsums(int *a, int size)
{
int i = 0;
int j = 0;
int sum1 = 0;
int sum2 = 0;
while (i < size)
{
while (j < size)
{
if (i == j)
{
sum1 += a[i * size + j];
sum2 += a[i * size + (size - 1 - j)];
}
j++;
}
j = 0;
i++;
}
printf("%d, %d\n", sum1, sum2);
}
