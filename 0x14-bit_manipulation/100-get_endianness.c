#include <stdio.h>
#include "main.h"

/**
 * get_endianness - print binary func
 * Return: an int
 */
int get_endianness(void)
{
unsigned int num = 1;
char *checker = (char *)&num;
return (*checker == 1);
}
