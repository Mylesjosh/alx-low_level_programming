#include "lists.h"

/**
 * find_listint_loop - thsi function find a loop
 * @head: the head of list to find the loop
 * Description: this function find a loop
 * section header: the header of this function is lists.h)*
 * Return: the node were the loop is located
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise, *hare;

	if (head == NULL || head->next == NULL)
		return (0);

	tortoise = head->next;
	hare = (head->next)->next;

	while (hare)
	{
		if (tortoise == hare)
		{
			tortoise = head;

			while (tortoise != hare)
			{
				tortoise = tortoise->next;
				hare = hare->next;
			}

			return (tortoise);
		}
		tortoise = tortoise->next;
		hare = (hare->next)->next;

	}
	return (NULL);
}

