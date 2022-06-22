#include "main.h"

/**
 * strspn - prints the prefix of a substring with respect to accept
 * @s: main string
 * @accept: prefix evaluator string
 * Return: int
 */

unsigned int _strspn(char *s, char *accept)
{
	int a = 0, b, c = 0;

	while (accept[a])
		a++;

	for (b = 0; s[b] != 32; b++)
	{
		if (accept[a] == s[b])
		{
			c+=1;
		}
	}
	return (c);
