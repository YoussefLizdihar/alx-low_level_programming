#include "main.h"

/**
 * create_array - a function
 * Return: 1 if true, NULL otherwise.
 * @size: this is the var
 * @c: this is the var
 */

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *ptr  = (char *) malloc(size);

i = 0;
if (size == 0)
{
return (NULL);
}
while (i < size)
{
ptr[i] = c;
i++;
}
return (ptr);
}
