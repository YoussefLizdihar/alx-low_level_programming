#include <stdio.h>
#include "main.h"

/**
 * clear_bit - print binary func
 * @n: a var
 * @index: a var
 * Return: an int
 */
int clear_bit(unsigned long int *n, unsigned int index)
{

if (index >= sizeof(unsigned long int *) * 8)
return (-1);

*n &= ~(1UL << index);
return (1);
}
