#include <stdio.h>
#include "dog.h"
/**
 * free_dog - a function
 * @d: var
 */

void free_dog(dog_t *d)
{
free(d->name);
free(d->owner);
free(d);
}
