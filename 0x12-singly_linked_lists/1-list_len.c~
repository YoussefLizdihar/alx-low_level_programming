#include <stdio.h>
#include "lists.h"

/**
 * _strlen - func to know str len
 * @str: string
 * Return: len
 */

int _strlen(char *str)
{
int len = 0;
if (!str)
return (0);
while (*str != '\0')
{
len++;
str++;
}
return (len);
}
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
printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
h = h->next;
i++;
}
return (i);
}
