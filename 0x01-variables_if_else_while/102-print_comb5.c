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
int p = 0;
int n = 0;
int j = 0;
int x = 1;
while (n + p < j + x < 100 && n <= p <= j <= x <= 9)
{
while (x <= 9)
{
putchar('0' + p);
putchar('0' + n);
putchar(' ');
putchar('0' + j);
putchar('0' + x);
x++;
if (p <= 9)
{
putchar(',');
putchar(' ');
}
}
p++;
n++;
j = p + 1;
x = p + 1;
}
putchar('\n');
return (0);
}
