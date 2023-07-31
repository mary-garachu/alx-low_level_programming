#include "lists.h"
#include <string.h>

/**
 * free_listint -function that frees a list.
 * @head:pointer to a pointer to the head.
 * Return: the number of elements in a linked list
 */

void free_listint(listint_t *head)
{
	listint_t *new_node;

	while (head != NULL)
	{
		new_node = head;
		head = head->next;
		free(new_node);
	}
}
