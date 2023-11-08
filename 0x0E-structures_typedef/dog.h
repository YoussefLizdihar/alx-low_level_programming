#ifndef DOG_H
#define DOG_H
#include <string.h>
#include <stdlib.h>

/**
 * struct dog - Short descriptiona structre
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: Longer descriptionthis is a struct for 3 elements
 */
typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
