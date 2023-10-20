#include "main.h"
/**
 * cap_string - a function
 * Return: 1 if true, 0 otherwise.
 * @str: is an argument 
 */

char *cap_string(char *str)
{
int i = 0;
while(str[i] != '\0')
{
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] -= 32;
}
i++;
}
return (str);
}
