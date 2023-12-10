#include "main.h"

/**
 * _strdup - a function
 * Return: 1 if true, NULL otherwise.
 * @str: this is the var
 */

char *_strdup(char *str)
{
int i;
int size = 0;
char *ptr = NULL;
i = 0;
if (str == NULL)
{
return (NULL);
}
while (str[size] != '\0')
{
size++;
}
ptr = (char *) malloc(size + 1);
if (ptr == NULL)
{
return (NULL);
}
while (i <= size)
{
ptr[i] = str[i];
i++;
}
return (ptr);
}
