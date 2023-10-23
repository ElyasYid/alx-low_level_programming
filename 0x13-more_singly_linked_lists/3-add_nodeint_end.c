#include "lists.h"

/**
 * add_nodeint_end - adds node at end of list
 * @head: pointer to list
 * @n: number to add
 * Return: new address or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *pimp = *head;

	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (pimp->next != NULL)
	{
		pimp = pimp->next;
	}
	pimp->next = new;
	return (new);
}
