#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string param 1
 * @s2: string param 2
 * Return: difference of si and s2
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
