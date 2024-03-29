#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t c = 0;
	const listint_t *slow = head, *fast = head;

	if (head == NULL)
		exit(98);

	while (fast != NULL && fast->next != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		c++;
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			printf("[%p] %d\n", (void *)slow, slow->n);
			c++;
			break;
		}
	}

	while (head != slow)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		c++;
		head = head->next;
	}
	printf("[%p] %d\n", (void *)head, head->n);
	c++;

	return (c);
}
