#include <stdio.h>
#include "main.h"

/**
 * get_bit - print binary func
 * @n: a var
 * @index: a var
 * Return: an int
 */
int get_bit(unsigned long int n, unsigned int index)
{

if (index >= sizeof(unsigned long int) * 8)
return (-1);

return ((n >> index) & 1);
}
