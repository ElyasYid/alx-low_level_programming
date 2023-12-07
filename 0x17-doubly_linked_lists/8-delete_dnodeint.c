#include "lists.h"

/**
 * delete_dnodeint_at_index- deletes the node at a given index
 * @head: pointer to the list
 * @index: index of the node to delete
 * Return: 1 if it succeeded, -1 if it failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *dscrd;
	dlistint_t *dscrd2;
	unsigned int count = 0;

	if (head == NULL)
		return (-1);
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		dscrd = *head;
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(dscrd);
		return (1);
	}
	dscrd = *head;
	while (dscrd != NULL)
	{
		if (count == index - 1)
		{
			dscrd2 = dscrd->next;
			dscrd->next = dscrd->next->next;
			if (dscrd->next != NULL)
				dscrd->next->prev = dscrd;
			free(dscrd2);
			return (1);
		}
		dscrd = dscrd->next;
		count++;
	}
	return (1);
}
