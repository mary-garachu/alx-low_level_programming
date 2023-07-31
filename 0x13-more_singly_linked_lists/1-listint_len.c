#include "lists.h"
#include <string.h>

/**
 * listint_len - function that prints all the
 * elements of a list.
 * @h: pointer to a node.
 * Return: the number of elements in a linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
