#include <stdio.h>
/**
 * main - a function
 * Return: 1 if true, 0 otherwise.
 * @argv: this is the char
 * @argv: this is the var
 */
int main(int argc, char const *argv[])
{
int i;
if (argc == 3)
{
sum = atoi(argv[1] * argv[2]);
printf("%d\n", sum);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
