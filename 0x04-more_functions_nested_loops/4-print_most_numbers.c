#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - a function that prints the numbers, from 0 to 9.
 *
 */

void print_most_numbers(void)
{
int i;
i = 0;
while (i < 10)
{
if (i != 2 && i != 4)
{
putchar(i + '0');
}
i++;
}
putchar('\n');

}
