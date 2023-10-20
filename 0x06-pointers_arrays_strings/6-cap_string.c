#include "main.h"
/**
 * cap_string - a function
 * Return: 1 if true, 0 otherwise.
 * @str: is an argument
 */

char *cap_string(char *str)
{
int i = 0;
while (str[i] != '\0')
{
while (str[i] <= 'z' && str[i] >= 'a')
{
if (str[i - 1] == ' ' || str[i - 1] == '.' ||
str[i - 1] == '\n' || str[i - 1] == '\t' ||
str[i - 1] == ',' || str[i - 1] == '?' ||
str[i - 1] == '!' || str[i - 1] == '{' ||
str[i - 1] == '"' || str[i - 1] == '}' ||
str[i - 1] == '(' || str[i - 1] == ')')
{
str[i] -= 32;
}
i++;
}
i++;
}
return (str);
}
