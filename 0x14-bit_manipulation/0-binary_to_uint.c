#include "main.h"

/**
 * binary_to_uint - function converts binary to unsigned integer
 * @b: binary to convert
 * Return: converted number, or 0 if NULL or isn't binary
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int baseten = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		baseten = 2 * baseten + (b[i] - '0');
	}

	return (baseten);
}
