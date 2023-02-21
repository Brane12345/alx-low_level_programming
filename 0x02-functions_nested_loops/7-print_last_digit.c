#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * @i: the number
 * Return: value of the last digit
 */
int print_last_digit(int i)
{
	int ld = i % 10;

	if (ld < 0)
		ld *= -1;

	_putchar(ld + '0');

	return (0);
}
