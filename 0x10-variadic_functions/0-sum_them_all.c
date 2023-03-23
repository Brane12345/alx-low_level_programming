#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - computes the sum of its parameters
 * @n: the number of parameters to sum
 *
 * Return: the sum of the parameters, or 0 if n is 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int i;

	if (n == 0)
	{
		return (0);
	}

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);
	return (sum);
}
