#include "main.h"

int real_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find the square root of
 * Return: the subsequent square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (real_sqrt_recursion(n, 0));
}

/**
 * real_sqrt_recursion - recursion compute the natural
 * square root of a number
 * @n: number to calculate the square root of
 * @i: the iterator
 * Return: the square root
 */
int real_sqrt_recursion(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (real_sqrt_recursion(n, i + 1));
}
