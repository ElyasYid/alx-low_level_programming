#include "hash_tables.h"

/**
 * key_index - function returns index of key/value
 * @key: key to  hash
 * @size: size of array
 * Return: index of key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hashy;

	hashy = hash_djb2(key);
	return (hashy % size);
}
