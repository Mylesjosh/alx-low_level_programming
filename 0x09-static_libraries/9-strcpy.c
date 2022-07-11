#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copy string from src to dest
 * @dest: pointing to destination
 * @src: pointing to source
 * Return: void
 */

char *_strcpy(char *dest, char *src)
{
	char *point = dest;


	while (*src)
	{
		*dest++ = *src++;
	}
	*dest = 0;
	return (point);
}
