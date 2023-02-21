#include "main.h"
/**
 * islower - check if a character is lowercase
 * @c: the character
 * Return: 1 if character is lowercase, 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
