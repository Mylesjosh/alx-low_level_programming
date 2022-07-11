#include "main.h"

/**
 * _strpbrk - searches for any set of bytes in a string
 * @s: source string
 * @accept: accepted string
 * Return: string
 */

char *_strpbrk(char *s, char *accept)
{
	int a = 0, b;

	while (s[a])
	{
		b = 0;

		while (accept[b])
		{
			if (s[a] == accept[b])
			{
				s += a;
				return (s);
			}
			b++;
		}
		a++;
	}
	return ('\0');

}

