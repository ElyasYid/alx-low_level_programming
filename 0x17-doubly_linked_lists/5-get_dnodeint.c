#include "lists.h"

/**
 * get_dnodeint_at_index - gets the nth node of a doubly linked list
 * @head: pointer to the list
 * @index: index of the node to return
 * Return: address of the node, if fail NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *dscrd;
	unsigned int count;

	dscrd = head;
	count = 0;

	if (head == NULL)
		return (NULL);

	while (dscrd != NULL)
	{
		if (count == index)
			return (dscrd);

		dscrd = dscrd->next;
		count++;
	}

	return (NULL);
}
