#include "main.h"

/**
 * argstostr - a function
 * Return: 1 if true, NULL otherwise.
 * @ac: this is the var
 * @av: this is the var
 */

char *argstostr(int ac, char **av)
{
char *ptr;
int i;
int j = 0;
int k;
int l = 0;

if (ac == 0 || av == NULL)
{
return (NULL);
}

for (i = 0; i < ac; i++)
{
for (k = 0; av[i][k]; k++)
{
j++;
}
}
j = j + ac;
ptr = (char *)malloc(sizeof(char) * j + 1);
if (ptr == NULL)
{
return (NULL);
}
for (i = 0; i < ac; i++)
{
for (k = 0;av[i][k]; k++)
{
ptr[l] = av[i][k];
l++;
}
if (ptr[l] == '\0')
{
ptr[l++] = '\n';
}
}
return (ptr);
}
