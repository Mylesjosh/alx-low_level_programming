#include "main.h"
#include <string.h>

/**
 * print_rev - function that prints string in reverse
 * @s: param for tring reverse
 */

void print_rev(char *s)
{
	int n, i;

	n = strlen(s);

	for (i = n - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
