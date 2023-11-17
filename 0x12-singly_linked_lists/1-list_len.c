#include "lists.h"

/**
 * list_len - a function
 * @h: var
 * Return: the True elements
 */

size_t list_len(const list_t *h)
{
size_t i = 0;
while (h)
{
h = h->next;
i++;
}
return (i);
}
