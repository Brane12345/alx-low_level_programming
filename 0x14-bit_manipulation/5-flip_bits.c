#include "main.h"

/**
 * flip_bits -a function that returns the number of bits you
 *	would need to flip to get from one number to another.
 * @n: the first number
 * @m: the second number
 *
 * Return: the number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int difren = n ^ m;
	unsigned int count = 0;

	while (difren)
	{
		count += difren & 1;
		difren >>= 1;
	}
	return (count);
}
