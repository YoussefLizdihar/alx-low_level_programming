#include "main.h"
/**
 * rot13 - a function
 * Return: 1 if true, 0 otherwise.
 * @s: is an argument
 */

char *rot13(char *s)
{
char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char n[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
int i = 0;
int j = 0;
while (s[i] != '\0')
{
while (j < 52)
{
if (s[i] == a[j])
{
s[i] = n[j];
break;
}
j++;
}
j = 0;
i++;
}
return (s);
}
