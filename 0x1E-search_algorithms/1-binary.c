#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - linear search function for a value in an array
 * @array: the group of values
 * @size: the length of the array
 * @value: the value we looking for
 * Return: Always EXIT_SUCCESS
 */
int binary_search(int *array, size_t size, int value)
{

int left = 0, right = size - 1, mid, i;

if (array == NULL)
return (-1);

while (left <= right)
{
printf("Searching in array: ");
for (i = left; i <= right; i++)
{
if (i != left)
printf(", ");
printf("%d", array[i]);
}
printf("\n");

mid = left + (right - left) / 2;

if (array[mid] == value)
return (mid);
else if (array[mid] < value)
left = mid + 1;
else
right = mid - 1;
}

return (-1);

}
