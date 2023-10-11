#include "main.h"
#include <ctype.h>
/**
 * _islower - a function that checks for lowercase character
 * Return: success 1.
 * @c: this is the char
 */
int _islower(int c)
{
if (islower(c))
{
return (1);
}
else
{
return (0);
}
}
