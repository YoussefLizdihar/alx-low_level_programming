#include "main.h"
/**
 * leet - a function
 * Return: 1 if true, 0 otherwise.
 * @str: is an argument
 */

char *leet(char *str)
{
char a[] = { 'a', 'e', 'o', 't', 'l' };
char n[] = { '4', '3', '0', '7', '1' };
int i = 0;
int j = 0;
while (str[i] != '\0')
{
while (j < 5)
{
if (str[i] == a[j] || str[i] == a[j] - 32)
{
str[i] = n[j];
}
j++;
}
j = 0;
i++;
}
return (str);
}
