#include <stdio.h>
/**
 * main - a function
 * Return: 1 if true, 0 otherwise.
 * @argc: this is a var
 * @argv: this is the var
 */
int main(int argc, char const *argv[])
{
int i = 0;
int sum = 0;
while (argc--)
{

if (argc == 1)
{
printf("0\n");
break;
}
if (argc > 1)
{
sum = sum + argv[i];
break;
}
else
{
break;
}
i++;
}
if (argc > 1)
{
printf("%d\n", sum);
}
else if (argc < 0)
{
printf("Error\n");
return (1);
}
return (0);
}
