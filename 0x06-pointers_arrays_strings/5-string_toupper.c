#include "main.h"
/**
 * string_toupper - a function
 * Return: 1 if true, 0 otherwise.
 */

char *string_toupper(char *str)
{
int i = 0;
while (str[i] != '\0')
{
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] -= 32;
}
i++;
}
return (str);
}
