#include "main.h"
#include <stdlib.h>
/**
 * _calloc - Allocates memory for an array, using malloc
 * @nmemb: Number of elements in the array.
 * @size: Size of each element in bytes.
 *
 * Return: Pointer to the allocated memory, or NULL if nmemb or size is 0 or if
 *         malloc fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	if (nmemb == 0 || size == 0)
		return (NULL);

	void *ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	memset(ptr, 0, nmemb * size);

	return (ptr);
}
