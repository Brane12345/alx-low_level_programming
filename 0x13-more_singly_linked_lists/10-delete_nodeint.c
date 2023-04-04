#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes the node at a given position in a list.
 * @head: Pointer to a pointer to the head of the list.
 * @index: Index of the node to be deleted. Index starts at 0.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node, *previous_node;
	unsigned int t = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	current_node = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(current_node);
		return (1);
	}

	while (current_node != NULL && t < index)
	{
		previous_node = current_node;
		current_node = current_node->next;
		t++;
	}

	if (current_node == NULL)
		return (-1);

	previous_node->next = current_node->next;
	free(current_node);

	return (1);
}
