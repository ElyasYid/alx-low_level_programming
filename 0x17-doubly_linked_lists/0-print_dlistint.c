#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 * @h: The head
 * Return: The number of nodes in the list.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *discard = h;

	while (discard != NULL)
	{
		printf("%d\n", discard->n);
		discard = discard->next;
		count++;
	}
	return (count);
}
