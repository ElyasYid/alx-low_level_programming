#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int r;

	r = 0;

	while (s[r] != '\0')
	{
		r++;
	}

	return (r);
}
