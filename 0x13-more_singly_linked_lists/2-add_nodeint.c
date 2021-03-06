#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - add a node to the head
 * @n : Nodes in the @listint_t
 * @head: The first node of list
 * Return: The address of the new element, NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_h = malloc(sizeof(listint_t));

	if (new_h == NULL)
		return (NULL);

	new_h->n = n;
	new_h->next = *head;
	*head = new_h;
	return (*head);
}

