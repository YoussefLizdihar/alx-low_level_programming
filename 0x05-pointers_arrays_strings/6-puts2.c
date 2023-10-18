#include "main.h"
#include <string.h>
/**
 * puts2 - a function
 * Return: 1 if c uppercasetrue, 0 otherwise.
 * @str: this is a var
 */
void puts2(char *str)
{
int i = 0;
while (str[i])
{
putchar(str[i]);
i = i + 2;
}
return;
}
