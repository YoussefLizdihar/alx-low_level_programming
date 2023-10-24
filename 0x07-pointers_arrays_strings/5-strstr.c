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
int k = 0;
while (needle[k] != '\0')
{
k++;
}
while (haystack[i] != '\0')
{
while (needle[n] != '\0')
{
if (needle[n] + k == haystack[i] + k)
{
x = 1;
break;
}
n++;
}
if (x)
{
return (&needle[n]);
}
n = 0;
i++;
}
return (NULL);
}
