#include "main.h"
/**
 * print_alphabet_10x - prints alpha 10 times
 */
void print_alphabet_x10(void)
{
	char a;
	int j = 0;

	while (j <= 9)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
			_putchar('\n');
			a++;
	}
}
