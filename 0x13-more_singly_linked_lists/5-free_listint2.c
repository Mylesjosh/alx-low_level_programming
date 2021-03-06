#include "lists.h"

/**
 * free_listint2 - Frees a list_t list
 * @head: Pointer to the head/first node of list_t
 */

void free_listint2(listint_t **head)
{
	listint_t *select;

	if (head == NULL)
		return;

	while (*head)
	{
		select = (*head)->next;
		free(*head);
		*head = select;
	}
	head = NULL;

}
