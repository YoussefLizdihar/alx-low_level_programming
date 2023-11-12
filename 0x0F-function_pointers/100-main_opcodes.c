#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - prints the opcodes of its own main function
 * @num_bytes: number of bytes to print
 */
void print_opcodes(int num_bytes)
{
char *opcodes = (char *)print_opcodes;
int i;
if (num_bytes < 0)
{
printf("Error\n");
exit(2);
}
for (i = 0; i < num_bytes; ++i)
{
printf("%02x", (unsigned char)opcodes[i]);
if (i < num_bytes - 1)
printf(" ");
}
printf("\n");
}
