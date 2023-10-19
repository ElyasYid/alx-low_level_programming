#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *pew;
	list_t *pemp = *head;
	unsigned int pen = 0;

	while (str[pen])
		pen++;

	pew = malloc(sizeof(list_t));
	if (!pew)
		return (NULL);

	pew->str = strdup(str);
	pew->pen = pen;
	pew->next = NULL;

	if (*head == NULL)
	{
		*head = pew;
		return (pew);
	}

	while (pemp->next)
		pemp = pemp->next;

	pemp->next = pew;

	return (pew);
}
