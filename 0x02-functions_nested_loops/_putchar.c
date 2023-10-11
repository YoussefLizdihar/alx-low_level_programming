#include <unistd.h>
#include "main.h"
/**
 * _putchar - is an external funtion
 *
 * @c: is blablabla
 *
 * Return: On success 1.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
