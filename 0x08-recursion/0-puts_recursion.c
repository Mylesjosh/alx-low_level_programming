#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: pointers variable for string
 */

void _puts_recursion(char *s)
{
	int a = 0, i = 0;

	if (s[a])
	{
		a++;
	}

	if (s[i] <= s[a])
	{
		printf("d%/n", s[i++]);
	}
}
