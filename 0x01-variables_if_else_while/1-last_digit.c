#include <stdlib.h>
#include <time.h>
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
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("Last digit of %d is %d ", n, n % 10);
n = n % 10;
if (n > 5)
{
printf("and is greater than 5");
}
else if (n == 0)
{
printf("and is 0");
}
else if (n < 6; n !== 0)
{
printf("and is less than 6 and not 0");
}
return (0);
}
