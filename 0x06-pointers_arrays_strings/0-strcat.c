#include "main.h"

/**
 * _strcat - Concatenates the string pointed to by @src.
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest
 * Return: A pointer to the destination string @dest
 */

char *_strcat(char *dest, char *src)
{
	int index = 0, destlen = 0;

	while (dest[index++])
	{
		destlen++;
	}
	for (index = 0; src[index]; index++)
	{
		dest[destlen++] = src[index];
	}
	return (dest);
}

