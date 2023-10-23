#include "lists.h"

/**
 * get_nodeint_at_index - get a specific node
 * @head: pointer to the link
 * @index: the node to return
 * Return: the node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *temp = head;

	for (i = 0; i < index; i++)
	{
		temp = temp->next;
	}

	if (temp == NULL)
		return (NULL);

	return (temp);
}

