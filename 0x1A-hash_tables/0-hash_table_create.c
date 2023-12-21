#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table.
 * @size: size of an array.
 * Return: a pointer to the new hash table, Null if fail
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;
	unsigned long int x;

	if (size == 0)
		return (NULL);
	new = malloc(sizeof(hash_table_t));
	if (new == NULL)
		return (NULL);
	new->size = size;
	new->array = malloc(sizeof(hash_node_t *) * size);
	if (new->array == NULL)
	{
		free(new);
		return (NULL);
	}
	for (x = 0; x < size; x++)
		new->array[x] = NULL;
	return (new);
}
