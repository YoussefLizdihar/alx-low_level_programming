#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main()
{
int n = 1;
while (n <= 100)
{
if ((n % 3 == 0) && (n % 5 == 0))
{
printf("FizzBuzz ");
}
else if (n % 5 == 0)
{
printf("Buzz ");
}
else if (n % 3 == 0)
{
printf("Fizz ");
}
else
{
printf("%d ", n);
}
n++;
}

return 0;
}
