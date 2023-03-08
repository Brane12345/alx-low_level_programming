#include "main.h"
/**
 * _sqrt_recursion - computes the natural square root of a number
 * @n: the number to compute the square root of
 * Return: the square root of n, or -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	return (compute_sqrt(n, 1));
}

/**
 * compute_sqrt - helper function to compute the square root recursively
 * @n: the number to compute the square root of
 * @i: the current guess for the square root
 * Return: the square root of n, or -1 if n does not have a natural square root
 */
int compute_sqrt(int n, int i)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	if (i * i == n)
	{
		return (i);
	}
	if (i * i > n)
	{
		return (-1);
	}
	return (compute_sqrt(n, i + 1));
}
