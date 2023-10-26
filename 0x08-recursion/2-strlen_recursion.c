#include "main.h"

/**
 * _strlen_recursion - a function
 * Return: 1 if true, 0 otherwise.
 * @s: this is the char
 */

int _strlen_recursion(char *s)
{
if (*s != '\0')
{
return (1 + _strlen_recursion(s + 1));
}
return (0);
}
