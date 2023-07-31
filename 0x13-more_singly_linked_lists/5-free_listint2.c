#include "lists.h"
#include <stddef.h>

/**
 * free_listiint2: a function that frees a list.
 * @head:pointer to a pointer to head.
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;

	while (*head)
	{
		current = (*head)->next;
		free(*head);
		*head = current;
	}

	head = NULL;
}
