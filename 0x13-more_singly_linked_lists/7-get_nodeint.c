#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: Pointer to the head of the linked list.
 * @index: Index of the node starting from 0.
 *
 * Return: Pointer to the nth node of the linked list,
 *	or NULL if the node does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int c = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		if (c == index)
		{
			return (current);
		}
		c++;
		current = current->next;
	}
	return (NULL);
}
