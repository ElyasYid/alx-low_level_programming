#include "lists.h"

/**
 * insert_nodeint_at_index - inserts node at index
 * @head: pointer to list
 * @idx: index
 * @n: number to be inserted
 * Return: node if successful NULL if not
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = malloc(sizeof(listint_t));
	unsigned int i, j;
	listint_t *deah = *head;

	j = idx - 1;
	if (!n || !head)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	if (idx == 0)
	{
		temp->next = *head;
		*head = temp;
		return (temp);
	}
	for (i = 0; i < j; i++)
	{
		deah = deah->next;
	}
	temp->next = deah->next;
	deah->next = temp;

	return (temp);
}
