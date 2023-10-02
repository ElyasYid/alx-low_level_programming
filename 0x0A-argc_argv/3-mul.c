#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies numbers
 * @argc: number of arguments
 * @argv: array of iarguments
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int i, j;

	if (argc == 3)
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		printf("%d\n", i * j);
	}
	else
	printf("Error\n");

	return (0);
}
