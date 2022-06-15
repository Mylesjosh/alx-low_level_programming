#include "main.h"
/**
 * string_toupper - changes all lowercase to uppercase
 * @y: param string
 * Return: string
 */


char *string_toupper(char *y)
{
	int index = 0;

	while (y[index])
	{
		if (y[index] >= 'a' && y[index] <= 'z')
		{
			y[index] -= 32;
		}
		index++;
	}
	return (y);
}

