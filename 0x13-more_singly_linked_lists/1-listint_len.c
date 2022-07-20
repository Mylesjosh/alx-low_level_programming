#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - Prints all the elements of listint_t
 * @h: Pointer to the head of the list
 * Return: The number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t linkn = 0;

	while (h)
	{
		h = h->next;
		linkn++;
	}
	return (linkn);
}
