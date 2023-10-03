#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	int i = 0, r = 0;
	char *k;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	k = malloc(sizeof(char) * i + 1);

	if (k == NULL)
		return (NULL);
	for (r = 0; str[r]; r++)
		k[r] = str[r];
	return (k);
}
