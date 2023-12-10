#include "function_pointers.h"
#include <stdlib.h>
#include <string.h>

/**
 * print_opcodes - prints the opcodes of its own main function
 * @num_bytes: number of bytes to print
 */
void print_opcodes(int num_bytes)
{
unsigned char *opcodes = malloc(num_bytes);
if (opcodes == NULL)
{
fprintf(stderr, "Memory allocation error\n");
exit(1);
}
memcpy(opcodes, print_opcodes, num_bytes);
for (int i = 0; i < num_bytes; ++i)
{
printf("%02x", opcodes[i]);
if (i < num_bytes - 1)
printf(" ");
}
printf("\n");
free(opcodes);
}
