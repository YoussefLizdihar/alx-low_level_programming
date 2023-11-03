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
unsigned int h = 0, a, b;
if (s2 == NULL)
{
s2 = "";
}
while (s1[h] != '\0')
{
h++;
}
ptr = malloc(sizeof(char) * (h + n) + 1);
for (a = 0; s1[a] != '\0'; a++)
{
ptr[a] = s1[a];
}
while (s2[b] != '\0' && b <= n)
{
ptr[a + b] = s2[b];
b++;
}
ptr[a + b] = '\0';
if (ptr == NULL)
{
return (NULL);
}
return (ptr);
}
