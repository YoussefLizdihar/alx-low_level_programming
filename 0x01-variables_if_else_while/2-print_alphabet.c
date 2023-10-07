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
char a = 'a';
char b = 'z';
while (a != b)
{
putchar(a);
a++;
if (a == b)
{
putchar(a);
}
}
putchar('\n');
return (0);
}
