#include "search_algos.h"

/**
 * linear_search - implementation Linear search algorithm
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: -1 if null or isn't located
 */
int linear_search(int *array, size_t size, int value)
{
	int k;

	if (array == NULL)
		return (-1);

	for (k = 0; k < (int)size; k++)
	{
		printf("Value checked array[%u] = [%d]\n", k, array[k]);
		if (value == array[k])
			return (k);
	}
	return (-1);
}
