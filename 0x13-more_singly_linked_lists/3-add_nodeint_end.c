#include "lists.h"

/**
 * add_nodeint_end - add a node to the head
 * @n : Nodes in the @listint_t
 * @head: The first node of list
 * Return: The address of the new element, NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newh, *lastnode;

	newh = malloc(sizeof(listint_t));

	if (newh == NULL)
	{
		return (NULL);
	}

	newh->n = n;
	newh->next = NULL;

	if (*head == NULL)
	{
		*head = newh;
	}

	else
	{
		lastnode = *head;
		while (lastnode->next != NULL)
			lastnode = lastnode->next;
		lastnode->next = newh;
	}
	return (*head);
}

