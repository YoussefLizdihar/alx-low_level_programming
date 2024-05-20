#include "lists.h"

/**
 * add_nodeint - a function
 * @head: var
 * @n: int var
 * Return: the num of elements
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
if (!head)
return (NULL);

listint_t *newNode = (listint_t *)malloc(sizeof(listint_t));

if (newNode == NULL)
return (NULL);

newNode->n = n;
newNode->next = *head;
*head = newNode;
return (newNode);


}
