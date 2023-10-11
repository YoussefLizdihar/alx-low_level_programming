#include "main.h"
/**
 * _abs - a function that checks for lowercase character
 * Return: success 1.
 * @n: this is the num
 */
int print_last_digit(int n)
{
int result = n % 10;
if (result <= 0)
{
result = -result;
}
putchar(result + 'n');
return (result);
}
