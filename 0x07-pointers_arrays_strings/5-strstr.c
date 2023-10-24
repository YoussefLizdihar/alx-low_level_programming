#include "main.h"

/**
 * _strstr - a function
 * Return: 1 if true, 0 otherwise.
 * @haystack: this is a var
 * @needle: this is a var
 */

char *_strstr(char *haystack, char *needle)
{
int i = 0;
int n = 0;
int x = 0;
while (haystack[i] != '\0')
{
while (needle[n] != '\0')
{
if (needle[n] == haystack[i + n])
{
x = 1;
break;
}
n++;
}
if (!x)
{
return (&haystack[i + n]);
}
n = 0;
i++;
x = 0;
}
return (NULL);
}
