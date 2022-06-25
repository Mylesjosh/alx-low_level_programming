#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: pointers variable for string
 */

void _puts_recursion(char *s)
{
	int a, i;

	while (s[a])
		a++;

	for (i = 0; s[i] <= s[a]; i++)
	{
		_putchar(s[i]);
	}
}
