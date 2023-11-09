#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - a function
 * Return: a value.
 * @array: this is var
 * @size: this is var
 * @action: this is var
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i = 0;
if (array && size && action)
while (i < size)
{
action(array[i]);
i++;
}
}
