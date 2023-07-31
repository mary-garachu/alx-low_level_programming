#include "lists.h"
#include <string.h>

/**
 * add_nodeint - function that prints all the
 * elements of a list.
 * @head:pointer to a pointer to the head.
 * @n:an integer value
 * Return: the number of elements in a linked list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
