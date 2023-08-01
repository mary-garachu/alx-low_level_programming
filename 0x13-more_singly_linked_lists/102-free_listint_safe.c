#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *current = *h;
	listint_t *next_node;

	while (current != NULL)
	{
		size++;
		next_node = current->next;
		free(current);
		current = next_node;
	}
	*h = NULL;
	return (size);
}
