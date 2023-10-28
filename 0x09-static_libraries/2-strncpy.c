#include "main.h"
/**
 * _strncpy - a function
 * Return: 1 if c uppercasetrue, 0 otherwise.
 * @dest: this is the char
 * @src: this is the char
 * @n: this is the int
 */

char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
int j = 0;
while (i < n)
{
dest[i] = src[i];
i++;
}
while (src[j] != '\0')
{
j++;
}
while (j < n)
{
dest[j] = '\0';
j++;
}
return (dest);
}
