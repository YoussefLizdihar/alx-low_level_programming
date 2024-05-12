#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - linear search function for a value in an array
 * @array: the group of values
 * @size: the length of the array
 * @value: the value we looking for
 * Return: Always EXIT_SUCCESS
 */

int linear_search(int *array, size_t size, int value)
{

size_t n = 0;

if (!array)
{
return (-1);
}

while (n < size)
{
printf("Value checked array[%ld] = [%d]\n", n, array[n]);
if (array[n] == value)
{
return (n);
}

n++;
}

if (n == size)
{
return (-1);
}
return (1);
}
