#include "main.h"
#include <string.h>
/**
 * puts_half - a function
 * Return: 1 if c uppercasetrue, 0 otherwise.
 * @str: this is a var
 */
void puts_half(char *str)
{
int i = 0;
int n;
while (str[i])
{
i++;
}
i = i - 1;
n = i / 2;
if (n % 2 == 0)
{
while (str[n] != '\0' && i >= n)
{
putchar(str[n + 1]);
n++;
}
}
else if (n % 2 == 1)
{
putchar(str[i]);
}
putchar('\n');
return;
}
