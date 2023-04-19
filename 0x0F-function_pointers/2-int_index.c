#include "function_pointers.h"

/**
 * int_index-The function that searches for the integer
 * @array: elements among which integer is sought
 * @size: size of the array
 * @cmp: function pointer
 * Return: Nothing
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]) != 0)
		{
			return (i);
		}
	}

	return (-1);
}
