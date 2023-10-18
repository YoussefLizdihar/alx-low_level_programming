#include "main.h"
#include <string.h>
/**
 * print_rev - a function
 * Return: 1 if c uppercasetrue, 0 otherwise.
 * @s: this is a var
 */
void print_rev(char *s)
{
int i = 0;
while (s[i])
{
i++;
}
while (i > 0)
{
putchar(s[i]);
i--;
}
putchar('\n');
return;
}
