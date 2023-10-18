#include "main.h"
#include <string.h>
/**
 * rev_string - a function
 * Return: 1 if c uppercasetrue, 0 otherwise.
 * @s: this is a var
 */
void rev_string(char *s)
{
int i = 0;
int j = 0;
while (s[i])
{
i++;
}
i = i - 1;
while (j < i)
{
char temp = s[j];
s[j] = s[i];
s[i] = temp;
j++;
i--;
}
return;
}
