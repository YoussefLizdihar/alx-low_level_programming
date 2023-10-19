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
while (i < n)
{
dest[i] = src[i];
i++;
}
return (dest);
}
