#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - returns the sum of a and b.
 * @a: first integer
 * @b: second integer
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference of a and b.
 * @a: first integer
 * @b: second integer
 *
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of a and b.
 * @a: first integer
 * @b: second integer
 *
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the result of the division of a by b.
 * @a: first integer
 * @b: second integer
 *
 * Return: result of the division of a by b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		return (0);
	}
	else
	{
		return (a / b);
	}
}

/**
 * op_mod - Returns the remainder of the division of two numbers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		return (0);
	}
	else
	{
		return (a % b);
	}
}
