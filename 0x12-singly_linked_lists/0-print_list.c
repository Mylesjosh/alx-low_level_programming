#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints the contents of list_t
 * @h: singly linked list
 * Return: return the nodes.
 */

size_t print_list(const list_t *h)
{
	size_t link;

	link = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		link++;
	}
	return (link);
}


