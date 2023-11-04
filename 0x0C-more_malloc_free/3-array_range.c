#include "main.h"

/**
 * array_range - a function
 * Return: 1 if true, NULL otherwise.
 * @min: this is the var
 * @max: this is the var
 */

int *array_range(int min, int max)
{
int *ptr;
int i = 0;
if (min > max)
{
return (NULL);
}
ptr = malloc((max - min + 1) * sizeof(int));
if (ptr == NULL)
return (NULL);
while (min <= max)
{
ptr[i] = min;
min++;
i++;
}
return (ptr);
}
