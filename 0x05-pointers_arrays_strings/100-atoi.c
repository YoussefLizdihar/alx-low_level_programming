#include "main.h"
#include <string.h>
/**
 * _atoi - a function
 * Return: 1 if true, 0 otherwise.
 * @s: this is a var
 */

int _atoi(char *s)
{
int i = 0;
int t = 1;
char j;
while (s[i] != '\0')
{
while (s[i] == '-' || s[i] == '+' || (s[i] >= 0 && s[i] <= 9))
{
if (s[i] == '-')
{
t = -t;
}
if (s[i] == '+')
{
t = +t;
}
if (s[i] >= 0 && s[i] <= 9)
{
j = s[i];
}
return (j);
j++;
break;
}
s[0] = t;
s[j + 1] = '\0';
i++;
}

}
