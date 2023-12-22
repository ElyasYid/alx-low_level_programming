#include "hash_tables.h"

/**
 * hash_table_set - Add/update element in hash table.
 * @ht: A pointer to hash table.
 * @key: The key to add
 * @value: The value associated with key.
 * Return: failure 0 success 1
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *brand;
	char *val_cpy;
	unsigned long int idx, y;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	val_cpy = strdup(value);
	if (val_cpy == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	for (y = idx; ht->array[y]; y++)
	{
		if (strcmp(ht->array[y]->key, key) == 0)
		{
			free(ht->array[y]->value);
			ht->array[y]->value = val_cpy;
			return (1);
		}
	}

	brand = malloc(sizeof(hash_node_t));
	if (brand == NULL)
	{
		free(val_cpy);
		return (0);
	}
	brand->key = strdup(key);
	if (brand->key == NULL)
	{
		free(brand);
		return (0);
	}
	brand->value = val_cpy;
	brand->next = ht->array[idx];
	ht->array[idx] = brand;

	return (1);
}
