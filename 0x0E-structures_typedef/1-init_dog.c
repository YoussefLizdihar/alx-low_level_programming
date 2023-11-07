#include "dog.h"
/**
 * init_dog - a function
 * @d: var
 * @name: var
 * @age: var
 * @owner: nar
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
