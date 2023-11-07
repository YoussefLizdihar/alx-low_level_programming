#include "dog.h"
#include <string.h>
#include <stdio.h>

/**
 * init_dog - a function
 * Return: 1 if true, NULL otherwise.
 * @d: var
 * @name: var
 * @age: var
 * @owner: nar
 */

void init_dog(struct dog *d, char *name, float age, char *owner);
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
