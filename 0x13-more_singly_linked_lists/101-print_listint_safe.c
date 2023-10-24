#include "lists.h"

/**
 * looped_listint_len - Counts number of unique nodein list
 * @head: pointer to list
 * Return: number of unique nodes else 0
 */

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *rt, *re;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	rt = head->next;
	re = (head->next)->next;

	while (re)
	{
		if (rt == re)
		{
			rt = head;
			while (rt != re)
			{
				nodes++;
				rt = rt->next;
				re = re->next;
			}

			rt = rt->next;
			while (rt != re)
			{
				nodes++;
				rt = rt->next;
			}

			return (nodes);
		}

		rt = rt->next;
		re = (re->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 * Return: The number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
