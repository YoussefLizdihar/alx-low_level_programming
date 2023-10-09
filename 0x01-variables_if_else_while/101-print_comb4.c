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
int j = 2;
if (n > p)
{
while (p <= 8)
{
while (n <= 9 && p < n)
{
while ( j <= 9 && n < j)
{
putchar('0' + p);
putchar('0' + n);
putchar('0' + j);
j++;
if (p <= 7)
{
putchar(',');
putchar(' ');
}
}
n++;
j = n + 1;
}
p++;
n = p + 1;
j = n + 1;
}
}
putchar('\n');
return (0);
}
