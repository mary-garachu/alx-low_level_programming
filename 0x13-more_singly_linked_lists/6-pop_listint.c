#include "lists.h"

/**
 * pop_listint- a function that deletes the head node
 * of a list.
 * @head: head node.
 * Return: head node's data.
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
	{
		return (0);
	}
	data = (*head)->n;

	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (data);
}
