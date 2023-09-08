#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x1, x2;

	for (x1 = 0; x1 <= 98; x1++)
	{
		for (x2 = x1 + 1; x2 <= 99; x2++)
		{
			putchar((x1 / 10) + '0');
			putchar((x1 % 10) + '0');
			putchar(' ');
			putchar((x2 / 10) + '0');
			putchar((x2 % 10) + '0');

			if (x1 == 98 && x2 == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
