#include "main.h"
#include "stdio.h"

/**
 * rot13 - Encodes a string using rot13.
 * @s: string to be encoded.
 * Return: *s
 */

char *rot13(char *s)
{
	int i;
	char c;

	for (i = 0; s[i] != '\0'; i++)
	{
		c = s[i];
		if ((c >= 'A' && c <= 'M') || (c >= 'a' && c <= 'm'))
			s[i] = c + 13;
		else if ((c >= 'N' && c <= 'Z') || (c >= 'n' && c <= 'z'))
			s[i] = c - 13;
	}
	return (s);
}
