#include "main.h"
#include <unistd.h>
/**
 * print_alphabet -will print alphabets
 * Return: success if 1.
 */
void print_alphabet(void)
{
int a = 97;
while (a <= 122)
{
_putchar(a);
a++;
}
_putchar('\n');
return;
}
