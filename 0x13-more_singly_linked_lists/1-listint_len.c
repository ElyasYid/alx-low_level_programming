#include "lists.h"

/**
 * listint_len - returns number of elements in a list
 * @h: pointer to list
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
