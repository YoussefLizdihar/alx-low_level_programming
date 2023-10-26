#include "main.h"

/**
 * _print_rev_recursion - a function
 * Return: 1 if true, 0 otherwise.
 * @s: this is the char
 */

void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
_print_rev_recursion(s + 1);
putchar(*s);
return;
}
putchar('\n');

}
