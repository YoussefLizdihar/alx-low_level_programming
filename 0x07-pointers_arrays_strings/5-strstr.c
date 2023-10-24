#include "main.h"

/**
 * _strstr - a function
 * Return: 1 if true, 0 otherwise.
 * @haystack: this is a var
 * @needle: this is a var
 */

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

while (haystack[i] != '\0')
{
while (needle[n] == haystack[i])
{
n++;
i++;
}
if (needle[n] == '\0')
{
n--;
i--;
return (&haystack[i - n]);
break;
}
n = 0;
i++;
}
return (NULL);
}
