#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: A pointer to the hash table to print.
 * Return: nada
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *qws;
	unsigned long int tyh;
	unsigned char bf = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (tyh = 0; tyh < ht->size; tyh++)
	{
		if (ht->array[tyh] != NULL)
		{
			if (bf == 1)
				printf(", ");

			qws = ht->array[tyh];
			while (qws != NULL)
			{
				printf("'%s': '%s'", qws->key, qws->value);
				qws = qws->next;
				if (qws != NULL)
					printf(", ");
			}
			bf = 1;
		}
	}
	printf("}\n");
}
