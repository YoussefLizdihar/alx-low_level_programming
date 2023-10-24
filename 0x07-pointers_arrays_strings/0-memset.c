#include "main.h"
/**
 * _memset - a function
 * Return: 1 if true, 0 otherwise.
 * @s: this is a var
 * @b: this is a var
 * @n: this is a var
 */

char *_memset(char *s, char b, unsigned int n)
{
int i = 0;
while (i < n)
{
s[i] = b;
i++;
}
return (s);
}
