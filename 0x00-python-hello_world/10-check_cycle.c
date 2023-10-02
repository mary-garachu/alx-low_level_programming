#include "lists.h"

/**
 * check_cycle - Checks if a singly-linked list contains a cycle.
 * @list: A singly-linked list.
 *
 * Return: If there is no cycle - 0.
 *         If there is a cycle - 1.
 */
int check_cycle(listint_t *list)
{
	listint_t *white, *black;

	if (list == NULL || list->next == NULL)
		return (0);

	white = list->next;
	black = list->next->next;

	while (white && black && black->next)
	{
		if (white == black)
			return (1);

		white = white->next;
		black = black->next->next;
	}

	return (0);
}
