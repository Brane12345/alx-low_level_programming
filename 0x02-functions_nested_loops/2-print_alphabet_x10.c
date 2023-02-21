#include "main.h"
/**
 * print_alphabet_10x - prints alpha 10 times
 */
void print_alphabet_x10(void)
{
	int j;
	char a;

	for (j = 0; j <= 9; j++)
	{
		for (a = 'a'; a <= 'z'; a++)
			_putchar(a);
		_putchar('\n');
	}
}
