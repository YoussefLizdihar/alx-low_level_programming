#include <stdio.h>
/**
 * main - The main function, which serves as the entry point of the program.
 *
 * This function prints "Hello, World!" to the console and returns 0.
 *
 * Return: 0 on successful execution.
 */
int main(void)
{
int p, n, j, x;
for (p = 0; p <= 9; p++)
{
for (n = 0; n <= 8; n++)
{
for (j = 0; j <= 9; j++)
{
for (x =  0; x <= 9; x++)
{
if (n + p < 18 && j + x <= 18 && p <= n <= j <= x <= 9)
putchar('0' + p);
putchar('0' + n);
putchar(' ');
putchar('0' + j);
putchar('0' + x);
if (!(n >= 8 && p >= 9 && x >= 9 && j >= 9))
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
