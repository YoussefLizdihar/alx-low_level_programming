#include "main.h"
#include <unistd.h>
/**
 * print_alphabet -will print alphabets
 * Return: success if 1.
 */
void print_alphabet_x10(void)
{
int a = 97;
int c = 1;
while (c <= 10)
{
while (a <= 122)
{
_putchar(a);
a++;
}
_putchar('\n');
c++;
}
return;
}
