#include "main.h"

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
if (needle[n] == haystack[i])
{
x = 1;
break;
}
n++;
}
if (x)
{
return (&haystack[i]);
}
n = 0;
i++;
}
