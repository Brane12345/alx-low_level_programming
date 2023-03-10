#include "main.h"
/**
 * _memset - fills memory with a constant byte.
 * @s: pointer address to put the constant
 * @b: constant
 * @n: number of bytes to be changed
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
