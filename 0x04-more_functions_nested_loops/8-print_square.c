#include "main.h"

/**
 * print_square - check for a digit
 * @size: number of square to be printed
 * Return: void
 */

void print_square(int size)
{
	int i = 0, a;

	while (i < size && size > 0)
	{
		a = 0;
		while (a < size)
		{
			_putchar('#');
			a++;
		}
		_putchar('\n');
		i++;
	}
	if (i == 0)
		_putchar('\n');
}
