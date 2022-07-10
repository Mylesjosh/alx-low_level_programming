#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string.
 * Return: pointer of an array of chars.
 */

char *_strdup(char *str)
{
	char *strout;
	unsigned int i = 0, k;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	strout = (char *)malloc(sizeof(char) * (i + 1));

	if (strout == NULL)
		return (NULL);

	for (k = 0; k <= i; k++)
		strout[k] = str[k];

	return (strout);
}
