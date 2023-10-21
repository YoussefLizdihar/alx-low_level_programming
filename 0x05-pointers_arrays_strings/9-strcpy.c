#include "main.h"
#include <string.h>
/**
 * _strcpy - a function
 * Return: 1 if true, 0 otherwise.
 * @dest: this is a var
 * @src: this is a var
 */

char *_strcpy(char *dest, char *src)
{
int i = 0;
int t;
while (src[i] != '\0')
{
t = src[i];
dest[i] = t;
i++;
}
return (dest);
}
