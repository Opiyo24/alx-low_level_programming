#include <stdlib.h>
#include "main.h"

/**
* *malloc_checked – prototype function that allocates required memory
* @b: patrameter that points to the allocated memory
*
* Return: a pointer to the allocated memory
*/

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
