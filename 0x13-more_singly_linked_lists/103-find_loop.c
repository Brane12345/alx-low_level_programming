#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a linked list
 * @head: Pointer to the head of the list
 * Return: The address of the node where the loop starts,
 *	or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *turtle, *hare;

	if (!head)
		return (NULL);

	turtle = head;
	hare = head;
	while (turtle && hare && hare->next)
	{
		turtle = turtle->next;
		hare = hare->next->next;

		if (turtle == hare)
		{
			turtle = head;

			while (turtle && hare)
			{
				if (turtle == hare)
					return (turtle);

				turtle = turtle->next;
				hare = hare->next;
			}
		}
	}
	return (NULL);
}
