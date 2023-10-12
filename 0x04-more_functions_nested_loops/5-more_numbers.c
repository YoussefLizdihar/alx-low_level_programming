#include "main.h"
#include <stdio.h>
/**
 * more_numbers - a function that prints the numbers, from 0 to 9
 *
 */

void more_numbers(void)
{
int i;
int j;
for (j = 1; j <= 10; j++)
{
for (i = 0; i < 15; i++)
{
if (i >= 10)
{
putchar((i / 10) + '0');
}
putchar((i % 10) + '0');
}
putchar('\n');
}
}
