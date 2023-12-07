#include "lists.h"

/**
 * sum_dlistint - adds values of all nodes in dlistint_t list
 * @head: pointer to the head of the list
 * Return: the sum
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *dscrd;
	int addition = 0;

	dscrd = head;

	while (dscrd != NULL)
	{
		addition += dscrd->n;
		dscrd = dscrd->next;
	}

	return (addition);
}
