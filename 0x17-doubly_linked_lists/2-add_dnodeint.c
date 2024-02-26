#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - a func to print dlist size
 * @head: node address to head
 * @n: data
 * Return: len of the list
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *newNode = (dlistint_t *)malloc(sizeof(dlistint_t));

if (newNode == NULL)
{
return (NULL);
}

newNode->n = n;
newNode->prev = *head;
newNode->next = NULL;

if (*head != NULL)
{
(*head)->next = newNode;
}

*head = newNode;

return (newNode);
}
