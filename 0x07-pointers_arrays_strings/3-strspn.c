#include "main.h"

/**
 * _strspn - prints the prefix of a substring with respect to accept
 * @s: main string
 * @accept: prefix evaluator string
 * Return: int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0, b, c = 0;

	while (accept[a])
	{
	for (b = 0; s[b] != 32; b++)
	{
		if (accept[a] == s[b])
		{
			c++;
		}
	}
	a++;
	}
	return (c);
}
