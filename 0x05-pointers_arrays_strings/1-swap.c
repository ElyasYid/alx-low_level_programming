#include "main.h"

/*
 * swap_int - swaps values of two integers
 * @a and @b: integers to be swapped
 * Return: void 
*/

void swap_int(int *a, int *b)
{

	int d;

	d = *a;
	*a = *b;
	*b = d;
}
