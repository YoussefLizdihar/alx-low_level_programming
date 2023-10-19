#include "main.h"
/**
 * _strcat - a function
 * Return: 1 if c uppercasetrue, 0 otherwise.
 * @dest: this is the char
 * @src: this is the char
 */
char *_strcat(char *dest, char *src)
{
char i = 0;
char j = 0;
while (dest[i] != '\0')
{
i++;
}
while (src[j] != '\0')
{
dest[i + j] = src[j];
j++;
}
dest[j + i + 1] = '\0';
return (dest);
}
