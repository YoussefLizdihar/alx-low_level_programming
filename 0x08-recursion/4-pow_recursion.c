#include "main.h"
/**
 * _pow_recursion - a function
 * Return: 1 if true, 0 otherwise.
 * @x: this is the char
 * @y: this is the char
 */

int _pow_recursion(int x, int y)
{
if (y == 0)
{
return (1);
}
else if (y < 0)
{
return (-1);
}
return (x * _pow_recursion(x, (y - 1)));
}
