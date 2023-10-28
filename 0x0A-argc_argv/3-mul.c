#include <stdio.h>
#include <stdlib.h>
/**
 * main - a function
 * Return: 1 if true, 0 otherwise.
 * @argv: this is the char
 * @argc: this is the var
 */
int main(int argc, char *argv[])
{
int i;
int j;
int sum;
if (argc == 3)
{
i = atoi(argv[1]);
j = atoi(argv[2]);
sum = i *j;
printf("%d\n", sum);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
