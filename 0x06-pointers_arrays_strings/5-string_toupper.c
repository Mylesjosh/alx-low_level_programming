#include "main.h"
/**
 * string_toupper - changes all lowercase to uppercase
 * @' ': param returning char
 * Return: string
 */


char *string_toupper(char *)
{
	int index = 0;

	char = str;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		{
			str[index] -= 32;
		}
		index++;
	}
	return (str);
}

