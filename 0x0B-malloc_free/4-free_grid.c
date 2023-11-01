#include "main.h"

/**
 * free_grid - a function
 * Return: 1 if true, NULL otherwise.
 * @grid: this is the var
 * @height: this is the var
 */

void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
free(grid[i]);
free(grid);
}
