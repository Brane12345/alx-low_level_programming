#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed into it
 * @argc: number of arguments
 * @argv: array of pointers to the strings which are those arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	printf("Program name: %s\n", argv[0]);
	printf("Number of arguments: %d\n", argc - 1);

	return (0);
}
