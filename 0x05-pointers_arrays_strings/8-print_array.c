#include "main.h"
#include <string.h>
/**
 * print_array - a function
 * Return: 1 if c uppercasetrue, 0 otherwise.
 * @a: this is a var
 * @n: this is a var
 */
void print_array(int *a, int n)
{
int i = 0;
while (i < n)
{
printf("%d", a[i]);
if (i + 1 != n)
{
printf(", ");
}
i++;
}
putchar('\n');
return;
}
