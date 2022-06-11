#include "main.h"

/**
 * _isdigit - checks if c is a digit
 * @c: the integer to be checked
 * Return: return either 1 or 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

