#include "dog.h"
/**
 * print_dog - a function
 * @d: var
 */

void print_dog(struct dog *d)
{
if (d)
{
printf("Name: %s", d->name);
printf("Age: %d", d->age);
printf("Owner: %s", d->owner);
}
}
