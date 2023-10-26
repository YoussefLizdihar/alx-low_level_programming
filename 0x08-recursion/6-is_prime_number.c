#include "main.h"

/**
 * is_prime_number - a function
 * Return: 1 if true, 0 otherwise.
 * @n: this is the var
 * @i: this is the var
 */
int helper(int n, int i);
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
return (helper(n, 2));
}
/**
 * helper - a function
 * Return: 1 if true, 0 otherwise.
 * @n: this is the char
 * @i: this is the var
 */
int helper(int n, int i)
{
if (n == i)
{
return (1);
}
if (n % i == 0)
{
return (0);
}
return (helper(n, i + 1));
}
