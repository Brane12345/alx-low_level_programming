#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints all the elements of a list_t list
 * @h: Pointer to the head of the list
 *
 * Return: The number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		if (current->str != NULL)
		{
			printf("[%d] %s\n", current->len, current->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}

		count++;
		current = current->next;
	}
	return (count);
}
