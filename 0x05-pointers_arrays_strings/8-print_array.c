#include "main.h"
#include <stdio.h>

/**
 * print_array - prints the elements of an array
 * @a: pointer to array name
 * @n: param n
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("\n");
}
