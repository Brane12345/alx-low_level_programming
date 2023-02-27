#include "main.h"
/**
 * puts_half - prints the second half of the string
 * @str: the string reference
 * Return: 0
 */
void puts_half(char *str)
{
	int len = _strlen(str);
	int start = (len - 1) / 2;

	for (int i = start; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
