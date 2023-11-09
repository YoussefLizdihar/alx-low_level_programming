#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - a function
 * Return: a value.
 * @array: this is var
 * @size: this is var
 * @cmp: this is var
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;
if (size <= 0)
return (-1);
if (array && cmp)
while (i < size)
{
if (cmp(array[i]))
return (i);
i++;
}
return (-1);
}
