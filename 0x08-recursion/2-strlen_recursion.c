#include "main.h"

/**
 * _strlen_recursion - prints length of str
 * @s: string
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
	{
	return (0);
	if (s[i])
		s++;
	}

	_strlen_recursion(s);
	_putchar(s[i]);
}

