#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @head: A pointer to the head of the dlistint_t list.
 * @n: The integer for the new node to contain.
 * Return: if fail NULL otherwise the address of the new node.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *starter;

	starter = malloc(sizeof(dlistint_t));

	if (starter == NULL)
		return (NULL);

	starter->n = n;
	starter->next = *head;
	starter->prev = NULL;

	if (*head != NULL)
		(*head)->prev = starter;

	*head = starter;

	return (starter);
}
