#include "main.h"

/**
 * _sqrt_recursion - a function
 * Return: 1 if true, 0 otherwise.
 * @n: this is the char
 * @x: this is the char
 */
int _sqr(int n, int x);
int _sqrt_recursion(int n)
{
return (_sqr(n, 1));
}
/**
 * _sqr - a function
 * Return: 1 if true, 0 otherwise.
 * @n: this is the char
 * @x: this is the char
 */
int _sqr(int n, int x)
{
if ((x * x) == n)
{
return (x);
}
else if (x * x < n)
{
return (_sqr(n, x + 1));
}
else
{
return (-1);
}
}
