#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator-Executes a function given as a parameter on each element
 * @array: the elements to iterate
 * @size: number of elements
 * @action: a pointer function
 * Return: Nothing
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
