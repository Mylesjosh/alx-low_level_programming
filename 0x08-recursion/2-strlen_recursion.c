#include "main.h"

/**
 * _strlen_recursion - prints length of str
 * @s: string
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
	{
	return;
	if (s[i])
		s++;
	}

	_strlen_recursion(s);
	_putchar(s[i]);
}

