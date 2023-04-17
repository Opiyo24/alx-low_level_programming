#ifndef DOG_H
#define DOG_H

/**
 * struct dog - new structure declaration
 * @name: structure element 1
 * @age: second structure element
 * @owner: structure element 3
 *
 * Description: Additional structure description
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
