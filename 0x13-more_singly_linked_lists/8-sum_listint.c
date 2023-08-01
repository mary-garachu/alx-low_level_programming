#include "lists.h"

/**
 * sum_listint- a function that returns the sum
 * of all data.
 * @head: head node.
 * Return: sum of data.
 */

int sum_listint(listint_t *head)
{
	listint_t *current = head;
	int sum = 0;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
