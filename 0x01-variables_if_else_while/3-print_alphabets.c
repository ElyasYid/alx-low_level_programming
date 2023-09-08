#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	char e;

	for (e = 'a'; e <= 'z'; e++)
	putchar(e);

	for (e = 'A'; e <= 'Z'; e++)
	putchar(e);
	putchar('\n');

	return (0);

}
