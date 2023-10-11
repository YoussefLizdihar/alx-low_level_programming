#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: the int to extract the last digit
 *
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
int re;
if (n < 0)
n = -n;
re = n % 10;
if (re < 0)
re = -re;
_putchar(re + '0');
return (re);
}
