#include "lists.h"
#include <string.h>

/**
 * add_nodeint_end -function that adds a new node
 * at the end of a list.
 * @head:pointer to a pointer to the head.
 * @n:an integer value
 * Return: the number of elements in a linked list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		listint_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_node;
	}
	return (new_node);
}
