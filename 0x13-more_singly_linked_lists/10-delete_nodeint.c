#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a given index
 * @head: pointer to the head of a list
 * @index: index of the node to be  deleted
 * Return: 1 (success)
 *        -1 (failed)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *previous;
	listint_t *next;

	previous = *head;

	if (index != 0)
	{
		for (i = 0; i < index - 1 && previous != NULL; i++)
		{
			previous = previous->next;
		}
	}

	if (previous == NULL || (previous->next == NULL && index != 0))
	{
		return (-1);
	}

	next = previous->next;

	if (index != 0)
	{
		previous->next = next->next;
		free(next);
	}
	else
	{
		free(previous);
		*head = next;
	}

	return (1);
}
