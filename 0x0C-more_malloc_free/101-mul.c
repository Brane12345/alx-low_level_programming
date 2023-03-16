#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - checks if a character is a digit
 * @c: the character to check
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _strlen - gets the length of a string
 * @s: the string to get the length of
 * Return: the length of s
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;
	return (len);
}

/**
 * _puts - prints a string to stdout
 * @s: the string to print
 */
void _puts(char *s)
{
	while (*s)
	{
		putchar(*s);
		s++;
	}
}

/**
 * mul - multiplies two positive numbers
 * @num1: the first number
 * @num2: the second number
 * Return: the product of num1 and num2
 */
char *mul(char *num1, char *num2)
{
	char *result;
	int len1, len2, i, j, k, carry, n1, n2, sum;

	len1 = _strlen(num1);
	len2 = _strlen(num2);
	result = calloc(len1 + len2, sizeof(char));
	if (result == NULL)
		return (NULL);

	for (i = len1 - 1; i >= 0; i--)
	{
		n1 = num1[i] - '0';
		carry = 0;
		k = len1 - i - 1;
		for (j = len2 - 1; j >= 0; j--)
		{
			n2 = num2[j] - '0';
			sum = n1 * n2 + carry + result[k];
			carry = sum / 10;
			result[k] = sum % 10;
			k++;
		}
		if (carry > 0)
			result[k] += carry;
	}

	i = len1 + len2 - 1;
	while (i >= 0 && result[i] == 0)
		i--;
	if (i == -1)
	{
		free(result);
		return ("0");
	}

	for (j = 0; j <= i; j++)
		result[j] += '0';

	return (result);
}

/**
 * main - multiplies two positive numbers
 * @argc: the number of command-line arguments
 * @argv: an array of command-line argument strings
 * Return: 0 if successful, 98 if invalid arguments were passed
 */
int main(int argc, char **argv)
{
	char *result, *num1, *num2;
	int i, j;

	if (argc != 3)
	{
		_puts("Error\n");
		return (98);
	}

	num1 = argv[1];
	num2 = argv[2];

	for (i = 0; num1[i]; i++)
	{
		if (!_isdigit(num1[i]))
		{
			_puts("Error\n");
			return (98);
		}
	}
	for (j = 0; num2[j]; j++)
	{
		if (!_isdigit(num2[j]))
		{
			_puts("Error\n");
			return (98);
		}
	}

	result = mul(num1, num2);
	_puts(result);
	_puts("\n");
	free(result);
	return (0);
}
