#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 * Return: the address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *pew;
	unsigned int pen = 0;

	while (str[pen])
		pen++;

	pew = malloc(sizeof(list_t));
	if (!pew)
		return (NULL);

	pew->str = strdup(str);
	pew->pen = pen;
	pew->next = (*head);
	(*head) = pew;

	return (*head);
}
