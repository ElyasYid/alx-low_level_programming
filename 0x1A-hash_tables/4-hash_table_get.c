#include "hash_tables.h"

/**
 * hash_table_get - function returns value of  key
 * @ht: pointer to hash table
 * @key: key to hash
 * Return: pointer to value NULL if not
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *qws;
	unsigned long int prt;

	if (ht == NULL || key == NULL)
		return (NULL);

	prt = key_index((const unsigned char *)key, ht->size);
	qws = ht->array[prt];
	while (qws)
	{
		if (strcmp(qws->key, key) == 0)
			return (qws->value);
		qws = qws->next;
	}
	return (NULL);
}
