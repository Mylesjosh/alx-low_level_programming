#include "main.h"

/**
 * _islower -> checks if the character is lowercase
 * @c: the character to be checked
 * Return: returns 0 or 1 depending on the condition
 */


int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}

	else
	{
		return (0);
	}

}

