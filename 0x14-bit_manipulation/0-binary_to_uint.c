#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - func to know str len
 * @b: a ptr to binary
 * Return: int
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int l = 1;
unsigned int i = 0;
unsigned int k;
unsigned int len;

if (b == NULL)
return (0);

while (b[len] != '\0')
{
len++;
}

for (k = len; k > 0; k--)
{

if (b[k - 1] != '0' && b[k - 1] != '1')
return (0);

if (b[k - 1] == '1')
{
i += (b[k - 1] - '0') * l;
}

l *= 2;
}

return (i);

}
