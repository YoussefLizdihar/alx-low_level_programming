#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - a func to print dlist size
 * @head: node address to head
 * Return: len of the list
 */

void free_dlistint(dlistint_t *head)
{
while (head != NULL)
{
if (head->prev != NULL)
{
head->prev->next = head->next;
}
if (head->next != NULL)
{
head->next->prev = head->prev;
}
free(head);
}
}
