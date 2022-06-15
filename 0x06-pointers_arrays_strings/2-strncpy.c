#include "main.h"

/**
 * _strncpy - Copies at most an inputted number
 * of bytes from string src into dest.
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 * @n: The maximum number of bytes to copied from src.
 * Return: dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, srclen = 0;

	while (src[index++])
	{
		srclen++;
	}

	for (index = 0; src[index] && index < n; index++)
	{
		dest[index] = src[index];
	}

	for (index = srclen; index < n; index++)
	{
		dest[index] = '\0';
	}
	return (dest);
}
