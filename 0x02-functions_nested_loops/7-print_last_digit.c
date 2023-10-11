#include "main.h"
/**
 * print_last_digit - a function that checks for lowercase character
 * Return: success 1.
 * @n: this is the num
 */
int print_last_digit(int n)
{
int result;
if (n < 0)
{
result = n % 10;
result = -result;
}
else
{
result = n % 10;
}
return (result);
}
