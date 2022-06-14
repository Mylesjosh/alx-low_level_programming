#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copy string from src to dest
 * @dest: pointing to destination
 * @src: pointing to source
 * return: void
 */

char *_strcpy(char *dest, char *src)
{
	char *point = dest;

	*dest = 0;
	while (*src)
	{
		*dest++ = *src++;
	}

	return (point);
}
