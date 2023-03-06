#include "main.h"
/**
 * _strchr - Entry point
 * @s: string to be searched
 * @c: character to be located
 * Return: NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	return (NULL);
}
