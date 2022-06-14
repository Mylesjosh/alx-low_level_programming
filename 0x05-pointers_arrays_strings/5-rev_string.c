#include "main.h"
#include <string.h>

/**
 * rev_string - function that reverses a string
 * @s: param for reversed string
 * Return: returns word.
 */

void rev_string(char *s)
{
	int i, n, word;

	i = strlen(s);

	for (n = i - 1; n <= 0; n--)
	{
		word = s[n];
	}
	return (word);
}
