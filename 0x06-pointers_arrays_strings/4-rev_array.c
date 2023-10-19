#include "main.h"
/**
 * reverse_array - a function
 * Return: 1 if c uppercasetrue, 0 otherwise.
 * @a: this is the pointer
 * @n: this is the int
 */

void reverse_array(int *a, int n)
{
int i = 0;
int j = 0;
int k = n - 1;
int r[k];
while (j < n)
{
r[j] = a[k];
j++;
k--;
}
while (i < n)
{
if (i != 0)
{
printf(", ");
}
printf("%d", r[i]);
i++;
}
printf("\n");
return;
}
