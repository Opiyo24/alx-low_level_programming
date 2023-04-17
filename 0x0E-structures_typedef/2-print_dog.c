#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints a new data structure named dog
 * @*d: The new structure name
 *
 * Return: A s directed
*/

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);

}
