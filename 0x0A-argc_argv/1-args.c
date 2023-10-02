#include <stdio.h>

/**
 * main - prints number of arguments passed to it
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
argv++;
	if (argc >= 0)
		printf("%d\n", argc - 1);


return (0);
}
