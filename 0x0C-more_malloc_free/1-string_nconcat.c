#include "main.h"

/**
 * string_nconcat - a function
 * Return: 1 if true, NULL otherwise.
 * @s1: this is the var
 * @s2: this is the var
 * @n: this is the var
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *ptr;
unsigned int a = 0, b = 0, i, j;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
for (i = 0; s1[i] != '\0'; i++)
for (j = 0; s2[j] != '\0'; j++)
ptr = malloc(i + n + 1);
if (ptr == NULL)
{
return (NULL);
}
while (s1[a] != '\0')
{
ptr[a] = s1[a];
a++;
}
while (s2[b] != '\0' && b < n)
{
ptr[a] = s2[b];
b++;
a++;
}
ptr[a] = '\0';
return (ptr);
}
