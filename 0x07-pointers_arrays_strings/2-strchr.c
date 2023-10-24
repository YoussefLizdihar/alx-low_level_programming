#include "main.h"

/**
 * _strchr - a function
 * Return: 1 if true, 0 otherwise.
 * @s: this is a var
 * @c: this is a var
 */

char *_strchr(char *s, char c)
{
int i = 0;
int z = 0;
while (*s != '\0')
{
if (s[i] == c)
{
return (s);
}
s++;
}
return (NULL);
}
