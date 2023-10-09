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
int n = 1;
int p = 0;
if (n > p)
{
while (p <= 8)
{
while (n <= 9 && n != p && p < n)
{
putchar('0' + p);
putchar('0' + n);
if (p <= 7)
{
putchar(',');
putchar(' ');
}
n++;
}
n = 1;
p++;
n = n + p;
}
}
putchar('\n');
return (0);
}
