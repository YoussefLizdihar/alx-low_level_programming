#include <stdio.h>
#include "lists.h"
/**
 * print_list - a function
 * @h: var
 * Return: the True elements
 */

size_t print_list(const list_t *h)
{
size_t i = 0;
while (h)
{
printf("[%ld] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
h = h->next;
i++;
}
return (i);
}
