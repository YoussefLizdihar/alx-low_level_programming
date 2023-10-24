#include "main.h"
/**
 * _strpbrk - a function
 * Return: 1 if true, 0 otherwise.
 * @s: this is a var
 * @accept: this is a var
 */

char *_strpbrk(char *s, char *accept)
{
int i = 0;
int n = 0;
int x = 0;
while (s[i] != '\0')
{
while (accept[n] != '\0')
{
if (accept[n] == s[i])
{
x = 1;
break;
}
n++;
}
if (x)
{
return (&s[i]);
}
n = 0;
i++;
}
return (NULL);
}
