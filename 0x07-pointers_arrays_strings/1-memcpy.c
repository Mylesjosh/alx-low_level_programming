#include "main.h"

/**
 * _memcpy - copy memory
 * @dest: destination char
 * @src: source char
 * @n: int
 * Return: a character
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int temp, i;

	for (i = 0; i < n; i++)
		temp[i] = dest[i];
		dest[i] = src[i];

	return (dest);
}

