#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - a func to print dlist size
 * @head: node address to head
 * @n: data
 * Return: len of the list
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t* newNode = (dlistint_t*)malloc(sizeof(dlistint_t));
if (newNode == NULL)
{
return(NULL);
}
newNode->n = n;
newNode->prev = NULL;
newNode->next = NULL;

if (*head == NULL)
{
*head = newNode;
}
else
{
newNode->next = *head;
(*head)->prev = newNode;
*head = newNode;
}
}
