#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - a func to get dlist len
 * @h: node address
 * Return: len of the list
 */

size_t dlistint_len(const dlistint_t *h)
{
size_t x = 0;
while (h)
{
h = h->next;
x++;
}
return (x);
}
