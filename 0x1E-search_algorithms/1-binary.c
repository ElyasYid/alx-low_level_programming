#include "search_algos.h"

/**
 * binary_recursive - Binary search algorithm
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int binary_recursive(int *array, size_t size, int value)
{
	size_t t = size / 2;
	size_t p;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (p = 0; p < size; p++)
		printf("%s %d", (p == 0) ? ":" : ",", array[p]);

	printf("\n");

	if (t && size % 2 == 0)
		t--;

	if (value == array[t])
		return ((int)t);

	if (value < array[t])
		return (binary_recursive(array, t, value));

	t++;

	return (binary_recursive(array + t, size - t, value) + t);
}

/**
 * binary_search - calls to binary_search to return
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int binary_search(int *array, size_t size, int value)
{
	int idx;

	idx = binary_recursive(array, size, value);

	if (idx >= 0 && array[idx] != value)
		return (-1);

	return (idx);
}
