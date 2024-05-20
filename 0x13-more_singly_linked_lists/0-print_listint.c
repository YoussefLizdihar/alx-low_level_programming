#include <stdio.h>
#include "lists.h"

/**
 * print_listint - a function
 * @h: var
 * Return: the num of elements
 */

size_t print_listint(const listint_t *h)
{
size_t i = 0;
if (h == NULL)
{
return (size);
}
while (h)
{
printf("%d\n", h->n);
h = h->next;
i++;
}
return (i);
}
