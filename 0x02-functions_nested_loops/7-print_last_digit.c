#include "main.h"
/**
 * print_last_digit - a function that checks for lowercase character
 * Return: success 1.
 * @n: this is the num
 */
int print_last_digit(int n)
{
int result = n % 10;
if (n < 0)
{
n = -n;
}
if (result <= 0)
{
result = -result;
}
result = result*11;
return (result);
}
