#include "main.h"
/**
 * _strncat - a function
 * Return: 1 if c uppercasetrue, 0 otherwise.
 * @dest: this is the char
 * @src: this is the char
 * @n: this is the int
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j = 0;
while (dest[i] != '\0')
{
i++;
}
while (src[j] != '\0' && j < n)
{
dest[i + j] = src[j];
j++;
}
dest[j + i + 1] = '\0';
return (dest);
}
