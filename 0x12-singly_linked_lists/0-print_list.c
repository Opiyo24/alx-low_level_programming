#include <stdio.h>
#include "lists.h"

/**
* print_list – checks the code for Holberton school students
* @h: list pointer to be printed
* Return: the number of nodes printed
*/

size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		s++;
		h = h->next;
	}

	return (s);
}
