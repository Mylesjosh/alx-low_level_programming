#include "lists.h"

/**
 * pop_listint - Deletes the node of a listint_t list
 * and return the head node's data @n
 * @head: Double pointer the head node
 * Return: The head node data n, 0 if empty
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int i;

	if (*head == NULL)
		return (0);

	tmp = *head;
	i = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (i);
}
