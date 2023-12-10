#include "main.h"
/**
 * _strcmp - a function that compares two strings
 * Return: 1 if true, 0 otherwise.
 * @s1: this is an arg
 * @s2: this is an arg
 */

int _strcmp(char *s1, char *s2)
{
int i = 0;
while (s1[i] != 0 && s2[i])
{
if (s1[i] != s2[i])
{
break;
}
i++;
}
return (s1[i] - s2[i]);
}
