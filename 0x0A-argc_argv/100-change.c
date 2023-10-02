#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int k, i, j;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	k = atoi(argv[1]);
	j = 0;

	if (k < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && k >= 0; i++)
	{
		while (k >= coins[i])
		{
			j++;
			k -= coins[i];
		}
	}

	printf("%d\n", j);
	return (0);
}
