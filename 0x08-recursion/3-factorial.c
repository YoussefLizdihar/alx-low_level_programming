#include "main.h"

/**
 * factorial - a function
 * Return: 1 if true, 0 otherwise.
 * @n: this is the char
 */

int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n <= 1)
{
return (1);
}

return (n * factorial(n - 1));
}
