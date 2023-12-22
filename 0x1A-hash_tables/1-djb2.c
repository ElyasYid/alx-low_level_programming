#include "hash_tables.h"

/**
 * hash_djb2 - implement the djb2 algorithm
 * @str: string used to get hash value
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int h_ash;
	int kol;

	h_ash = 5381;
	while ((kol = *str++))
	{
		h_ash = ((h_ash << 5) + h_ash) + kol;
	}
	return (h_ash);
}
