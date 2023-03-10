#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * is_digit - checks if a string is a positive integer
 * @s: string to check
 *
 * Return: 1 if s is a positive integer, 0 otherwise
 */
int is_digit(char *s)
{
	if (*s == '\0')
		return (0);
	while (*s)
	{
		if (*s < '0' || *s > '9')
			return (0);
		s++;
	}
	return (1);
}

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char **argv)
{
	int sum = 0, i;

	for (i = 1; i < argc; i++)
	{
		if (is_digit(argv[i]))
			sum += atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);

	return (0);
}
