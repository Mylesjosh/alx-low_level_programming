#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: string to be appended upon
 * @src: source string to be appended to dest
 * @n: the number of bytes to be appended to dest from src
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, destlen = 0;

	while (dest[index++])
	{
		destlen++;
	}

	for (index = 0; src[index] && index < n; index++)
	{
		dest[destlen++] = src[index];
	}
	return (dest);
}
