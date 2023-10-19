#include "main.h"
/**
 * _strcmp - a function
 * Return: 1 if c uppercasetrue, 0 otherwise.
 * @s1: this is the char
 * @s2: this is the char
 */

int _strcmp(char *s1, char *s2)
{
int i = 0;
int j = 0;
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
