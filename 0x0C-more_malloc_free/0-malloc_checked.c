#include "main.h"

/**
 * malloc_checked - a function
 * Return: 1 if true, NULL otherwise.
 * @b: this is the var
 */

void *malloc_checked(unsigned int b)
{
int *ptr;
unsigned ptr = malloc(b);
if (ptr == NULL)
{
exit(98);
}
return (ptr);
}
