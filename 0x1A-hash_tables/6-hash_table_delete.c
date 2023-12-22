#include "hash_tables.h"

/**
 * hash_table_delete - Delete hash table.
 * @ht: pointer to hash table.
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *cranium = ht;
	hash_node_t *qws, *pol;
	unsigned long int yhs;

	for (yhs = 0; yhs < ht->size; yhs++)
	{
		if (ht->array[yhs] != NULL)
		{
			qws = ht->array[yhs];
			while (qws != NULL)
			{
				pol = qws->next;
				free(qws->key);
				free(qws->value);
				free(qws);
				qws = pol;
			}
		}
	}
	free(cranium->array);
	free(cranium);
}
