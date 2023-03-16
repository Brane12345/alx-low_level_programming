#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * _isdigit - Checks if a character is a digit.
 *
 * @c: The character to check.
 *
 * Return: 1 if c is a digit, 0 otherwise.
 */
int _isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _strlen - Computes the length of a string.
 *
 * @s: The string to compute the length of.
 *
 * Return: The length of s.
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;

	return (len);
}
/**
 * _atoi - Converts a string to an integer.
 *
 * @s: The string to convert.
 *
 * Return: The integer value of s.
 */
int _atoi(char *s)
{
	int res = 0;
	int sign = 1;
	int i = 0;

	if (s[0] == '-')
	{
		sign = -1;
		i++;
	}

	for (; s[i]; i++)
	{
		if (!_isdigit(s[i]))
			return (-1);

		res = res * 10 + (s[i] - '0');
	}
	return (sign * res);
}

/**
 * _puts - Prints a string to stdout.
 *
 * @str: The string to print.
 */
void _puts(char *str)
{
	while (*str)
		putchar(*str++);
}

/**
 * mul - Multiplies two positive numbers.
 *
 * @num1: The first number to multiply.
 * @num2: The second number to multiply.
 *
 * Return: The result of the multiplication.
 */
int mul(int num1, int num2)
{
	return (num1 * num2);
}

/**
 * main - Entry point.
 *
 * @argc: The number of command-line arguments.
 * @argv: An array of pointers to the command-line arguments.
 *
 * Return: 0 on success, 98 on failure.
 */
int main(int argc, char **argv)
{
	int num1, num2, res;

	if (argc != 3)
	{
		_puts("Error\n");
		return (98);
	}

	if (_strlen(argv[1]) > 10 || _strlen(argv[2]) > 10)
	{
		_puts("Error\n");
		return (98);
	}

	if (_atoi(argv[1]) < 0 || _atoi(argv[2]) < 0)
	{
		_puts("Error\n");
		return (98);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);

	res = mul(num1, num2);

	printf("%d\n", res);
	return (0);
}
