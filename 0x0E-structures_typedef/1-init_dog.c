#include "dog.h"
#include <stdlib.h>

/**
 * init dog - Function that initializes a new data structure
 * @d: the new structure name
 * @name: structure name element
 * @age: structure age element
 * @owner: structure owner element
 *
 * Return: Always 0
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
    if (d == NULL)
        d = malloc(sizeof(struct dog));
    d->name = name;
    d->age = age;
    d->owner = owner;
}
