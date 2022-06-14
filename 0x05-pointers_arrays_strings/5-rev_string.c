#include "main.h"
#include <string.h>

/**
 * rev_string - function that reverses a string
 * @s: param for reversed string
 * Return: returns word.
 */

void rev_string(char *s)
{
	char word;
	int i, length1, length2;

	length1 = 0;
	length2 = 0;

	while (s[length1] != '\0')
		length1++;

	length2 = length1 - 1;
	for (i = 0; i < length1 / 2; i++)
	{
		tmp = s[i];
		s[i] = s[length2];
		s[length] = wor;
		length -= 1;
	}

}
