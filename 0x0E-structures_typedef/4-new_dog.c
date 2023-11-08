#include <stdio.h>
#include "dog.h"
/**
 * new_dog - a function
 * @name: var
 * @owner: var
 * @age: var
 * Return: Nothing
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog = malloc(sizeof(dog_t));
if (new_dog)
{
new_dog->name = name;
new_dog->age = age;
new_dog->owner = owner;
return (new_dog);
}
return (NULL);
}
