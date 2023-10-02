#include <stdio.h>

/**
 * main - prints name of program
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	argc++;
	printf("%s\n", argv[0]);
	return (0);
}
