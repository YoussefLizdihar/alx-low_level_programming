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
int num = 0;
while (num < 10)
{
putchar('0' + num);
num++;
}
putchar('\n');
return (0);
}
