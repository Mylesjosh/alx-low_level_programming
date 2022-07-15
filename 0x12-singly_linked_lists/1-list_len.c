#include "lists.h"
/**
 * list_len - prints the number of elements in a list_t list.
 * @h: singly linked list.
 * Return: returns the number of elements in the list.
 */

size_t list_len(const list_t *h)
{
	size_t numlen;

	numlen = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d]\n", 0);
		else
			printf("[%d]\n", h->len);
		h = h->next;
		numlen++;
	}
	return (numlen);
}
