#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers.
 * @a: array to be reversed
 * @n: number of elements of array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	for (i = 0; i < n / 2; i++)
	{
		tmp = *(a + i);
		*(a + i) = *(a + n - i - 1);
		*(a + n - i - 1) = tmp;
	}
}
