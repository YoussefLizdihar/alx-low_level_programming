#include <stdio.h>
#include "main.h"

/**
 * print_binary - print binary func
 * @n: a var
 * Return: none
 */
void print_binary(unsigned long int n)
{
int i;

if (n > 1)
print_binary(n >> 1);

i = n & 1;

putchar(i + '0');
}
