#include <stdlib.h>
#include <stdio.h>
/**
 * main - a function
 * Return: 1 if true, 0 otherwise.
 * @argc: this is a var
 * @argv: this is the var
 */
int main(int argc, char const *argv[])
{
int sum = 0;
if (atoi(argv[argc]) == 1)
{
printf("0\n");
}
else if (atoi(argv[argc]) > 1)
{
while (argc--)
{
sum = sum + atoi(argv[argc]);
}
printf("%d\n", sum);
}
else if (atoi(argv[argc]) < 1)
{
printf("Error\n");
return (1);
}
return (0);
}
