#include "main.h"
/**
 * _strncat - funtions that contatenates two strings
 * @dest: string to be appended on.
 * @src: string to be appended to dest.
 * @n: number of bytes from src to be appended to dest.
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
