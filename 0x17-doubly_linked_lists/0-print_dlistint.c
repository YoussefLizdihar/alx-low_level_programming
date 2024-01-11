#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - a func to print dlist size
 * @h: node address
 * Return: len of the list
 */

size_t print_dlistint(const dlistint_t *h)
{
size_t x = 0;
while (h)
{
printf("%d\n", h->n);
h = h->next;
x++;
}
return (x);
}
