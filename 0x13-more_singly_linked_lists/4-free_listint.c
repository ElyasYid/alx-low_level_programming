#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: pointer to list
 */

void free_listint(listint_t *head)
{
	listint_t *hemp;

	while (head)
	{
		hemp = head->next;
		free(head);
		head = hemp;
	}
}
