#include <stdio.h>
#include "dog.h"
/**
 * print_dog - a function
 * @d: var
 */

void print_dog(struct dog *d)
{
if (d)
{
printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
printf("Age: %f\n", d->age);
printf("owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
}
