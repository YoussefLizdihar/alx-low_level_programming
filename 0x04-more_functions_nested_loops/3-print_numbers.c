#include "main.h"

/**
 * print_numbers - a function that prints the numbers, from 0 to 9, followed by a new line.
 * Return: if success.
 */


void print_numbers(void)
{

int i;
i = 0;

while (i < 10)
{
_putchar('0' + i);
i++;
}

_putchar('\n');
return;

}
