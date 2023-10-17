#include "main.h"
#include <ctype.h>
/**
 * swap_int - a function
 * Return: 1 if c uppercasetrue, 0 otherwise.
 * @a: this is a var
 * @b: this is a var
 */
void swap_int(int *a, int *b)
{
int var = *b;
*b = *a;
*a = var;
return;
}
