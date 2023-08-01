#include "lists.h"
#include <stddef.h>

/**
 * free_listint2- a function that frees a list.
 * @head:pointer to a pointer to head.
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}
}
