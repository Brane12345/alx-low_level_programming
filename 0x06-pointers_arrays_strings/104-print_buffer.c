#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints buffer
 * @b: buffer
 * @size: size
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int i;
	int j;
	char c;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	i = 0;
	while (i < size)
	{
		printf("%08x: ", i);
		j = 0;
		while (j < 10)
		{
			if (i + j < size)
			{
				printf("%02x", b[i + j]);
			}
			else
			{
				printf("  ");
			}
			if (j % 2)
			{
				printf(" ");
			}
			j++;
		}
		j = 0;
		while (j < 10 && i + j < size)
		{
			c = b[i + j];
			if (!isprint(c))
			{
				c = '.';
			}
			printf("%c", c);
			j++;
		}
		printf("\n");
		i += 10;
	}
}
