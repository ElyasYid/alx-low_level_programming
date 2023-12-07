#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the list
 * @idx: index of the new node
 * @n: value of the new node
 * Return: address of the new node, or NULL if it fails
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *fresh;
	dlistint_t *dscrd;
	unsigned int count;

	if (h == NULL)
		return (NULL);
	dscrd = *h;
	count = 0;
	if (idx == 0)
	{
		fresh = malloc(sizeof(dlistint_t));
		if (fresh == NULL)
			return (NULL);
		fresh->n = n;
		fresh->next = *h;
		fresh->prev = NULL;
		if (*h != NULL)
			(*h)->prev = fresh;
		*h = fresh;
		return (fresh);
	}
	while (dscrd != NULL)
	{
		if (count == idx - 1)
		{
			fresh = malloc(sizeof(dlistint_t));
			if (fresh == NULL)
				return (NULL);
			fresh->n = n;
			fresh->next = dscrd->next;
			fresh->prev = dscrd;
			dscrd->next = fresh;
			if (fresh->next != NULL)
				fresh->next->prev = fresh;
			return (fresh);
		}
		dscrd = dscrd->next;
		count++;
	}
	return (NULL);
}
