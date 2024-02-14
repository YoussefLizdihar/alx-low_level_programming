#include <stdio.h>
#include "main.h"

/**
 * flip_bits - print binary func
 * @n: a var
 * @m: a var
 * Return: an int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{

unsigned long int xornum = n ^ m;
unsigned int i = 0;

while (xornum > 0)
{
if (xornum & 1)
i++;
xornum >>= 1;
}
return (i);
}
