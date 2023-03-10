#include <stdio.h>
#include <stdlib.h>
/**
 * count_coins - Counts the number of coins needed
 *	for a certain amount of money
 * @cents: The amount of money in cents
 * Return: The number of coins needed
 */
int count_coins(int cents)
{
	int coins = 0;

	while (cents >= 25)
	{
		coins++;
		cents -= 25;
	}

	while (cents >= 10)
	{
		coins++;
		cents -= 10;
	}

	while (cents >= 5)
	{
		coins++;
		cents -= 5;
	}

	while (cents >= 2)
	{
		coins++;
		cents -= 2;
	}

	while (cents >= 1)
	{
		coins++;
		cents -= 1;
	}
	return (coins);
}

/**
 * main - Prints the minimum number of coins
 * to make change for an amount of money
 * @argc: The number of arguments passed to the program
 * @argv: An array containing the arguments passed to the program
 *
 * Return: 0 if successful, 1 if an error occurred
 */
int main(int argc, char *argv[])
{
	int cents, coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	coins = count_coins(cents);

	printf("%d\n", coins);
	return (0);
}
