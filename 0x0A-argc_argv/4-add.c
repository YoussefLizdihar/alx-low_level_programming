#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - a function
 * Return: 1 if true, 0 otherwise.
 * @argc: this is a var
 * @argv: this is the var
 */

int main(int argc, char *argv[])
{
int i;
int sum = 0;
if (argc == 1)
{
printf("0\n");
return (0);
}
for (i = 1; i < argc; i++)
{
if (!isdigit(argv[i]))
{
sum += atoi(argv[i]);
}
else
{
printf("Error\n");
return (1);
}
}
printf("%d\n", sum);
return (0);
}
