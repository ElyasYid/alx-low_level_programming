#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * main -adds positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc > 1)
	{
		for (i = 1; i <= (argc - 1); i++)
		{
			sum = sum + atoi(argv[i]);

		}
		printf("%d\n", sum);
	}

	if (argc == 1)
		printf("0\n");

	return (0);

}
