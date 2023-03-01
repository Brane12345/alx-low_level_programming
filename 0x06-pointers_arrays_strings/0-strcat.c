#include "main.h"
/**
 * *_strcat - function that concatenates two strings.
 * @dest: the source string
 * @src: the destination string
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*p != '\0')
	{
		p++;
	}

	while (*src != '\0')
	{
		*p++ = *src++;
	}
	*p = '\0';

	return (dest);
}
