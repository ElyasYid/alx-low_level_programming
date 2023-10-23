#include "lists.h"

/**
 * print_listint - prints the elements in a linked list
 * @h: pointer to a list
 * Return:number of elements
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}

