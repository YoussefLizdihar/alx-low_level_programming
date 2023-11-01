#include "main.h"

/**
 * alloc_grid - a function
 * Return: 1 if true, NULL otherwise.
 * @width: this is the var
 * @height: this is the var
 */

int **alloc_grid(int width, int height)
{
int i, j;
int **ptr = NULL;
if (width <= 0 || height <= 0)
{
return (NULL);
}
ptr = (int **)malloc(height * sizeof(int *));
if (ptr == NULL)
{
return (NULL);
}
for (i = 0; i < height; i++)
{
ptr[i] = (int *)malloc(width * sizeof(int));
if (ptr[i] == NULL)
{
for (j = 0; j < i; j++)
{
free(ptr[j]);
}
free(ptr);
return (NULL);
}
for (j = 0; j < width; j++)
{
ptr[i][j] = 0;
}
}
return (ptr);
}
