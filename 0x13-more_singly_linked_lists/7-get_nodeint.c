#include "lists.h"

/**
 * get_nodeint_at_index- a function that gets node at index.
 * @head: head node.
 * @index: index of the node.
 * Return: nth node of the list.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current = head;

	while (current != NULL && count < index)
	{
		current = current->next;
		count++;
	}
	return (current);
}
