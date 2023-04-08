#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to print in binary
 *
 * Return: void
*/
void print_binary(unsigned long int n)
{
	int printed = 0;

	if (n == 0 || n == 1)
	{
		putchar(n + '0');
		printed = 1;
	}
	else
	{
		print_binary(n >> 1);
		if (n & 1)
		{
			putchar('1');
			printed = 1;
		}
		else
		{
			putchar('0');
		}
	}

	if (!printed)
	{
		putchar('0');
	}
}
