#include "main.h"
/**
 * _strspn - a function
 * Return: 1 if true, 0 otherwise.
 * @s: this is a var
 * @accept: this is a var
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int i = 0;
while (s[i] != '\0')
{
unsigned int n = 0;
int found = 0;
while (accept[n] != '\0')
{
if (accept[n] == s[i])
{
found = 1;
break;
}
n++;
}
if (!found)
{
break;
}
i++;
}
return (i);
}
