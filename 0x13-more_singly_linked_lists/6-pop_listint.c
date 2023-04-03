#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - Deletes the head node of a listint_t linked list
 * @head: Pointer to a pointer to the head node of the list
 * Return: The data (n) of the head node that was deleted,
 *	or 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (*head == NULL)
	{
		return (0);
	}

	temp = *head;
	*head = (*head)->next;
	n = temp->n;
	free(temp);

	return (n);
}
