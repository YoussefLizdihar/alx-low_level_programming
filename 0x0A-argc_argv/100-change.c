#include <stdio.h>
#include <stdlib.h>

/**
 * main - a function
 * Return: 1 if true, 0 otherwise.
 * @argc: this is a var
 * @argv: this is the var
 */

int main(int argc, char *argv[])
{
int amount, num_coins;
int coins[] = {25, 10, 5, 2, 1};
int i;
if (argc != 2)
{
printf("Error\n");
return (1);
}
amount = atoi(argv[1]);
if (amount < 0)
{
printf("0\n");
return (0);
}
num_coins = 0;
for (i = 0; i < 5; i++)
{
while (amount >= coins[i])
{
amount -= coins[i];
num_coins++;
}
}
printf("%d\n", num_coins);
return (0);
}
