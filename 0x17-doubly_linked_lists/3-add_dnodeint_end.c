#include "lists.h"

/**
 * add_dnodeint_end - Adds new node at end of dlistint_t list.
 * @head: pointer to the head of dlistint_t list.
 * @n: The integer for the new node to contain.
 * Return: If fail NULL else address of new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *addee;
	dlistint_t *dscrd;

	addee = malloc(sizeof(dlistint_t));
	if (addee == NULL)
		return (NULL);

	addee->n = n;
	addee->next = NULL;
	addee->prev = NULL;

	if (*head == NULL)
	{
		*head = addee;
		return (addee);
	}

	dscrd = *head;

	while (dscrd->next != NULL)
	{
		dscrd = dscrd->next;
	}

	dscrd->next = addee;
	addee->prev = dscrd;

	return (addee);
}
