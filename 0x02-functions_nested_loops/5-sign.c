#include "main.h"
#include <ctype.h>
/**
 * print_sign - a function that checks for lowercase character
 * Return: success 1.
 * @n: this is the char
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}
