#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - a func to print dlist size
 * @head: node address to head
 * Return: len of the list
 */

void free_dlistint(dlistint_t *head)
{
dlistint_t *tmp;

while (head != NULL)
{
tmp = head;
head = head->next;
free(tmp);
}
}
