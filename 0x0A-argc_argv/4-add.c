#include <stdlib.h>
#include <stdio.h>

/**
 * main - a function
 * Return: 1 if true, 0 otherwise.
 * @argc: this is a var
 * @argv: this is the var
 */

int main(int argc, char *argv[])
{
char *i;
int o = 0;
while (--argc)
{
for (i = argv[argc]); *i; i++)
{
if (*i < '0' && *i > '9')
{
printf("Error\n");
return (1);
}
o += atoi(argv[argc]);
}
}
printf("%d\n", o);
return (0);
}
