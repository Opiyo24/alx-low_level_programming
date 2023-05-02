#include "lists.h"

/**
 * print_listint - prints all the elements in a linked list
 * @h: linked list elements to print
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t a = 0;

	while (h)
	{
		printf("%d\n", h->n);
		a++;
		h = h->next;
	}

	return (a);
}
