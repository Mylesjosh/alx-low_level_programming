#include "main.h"

/**
 * _isupper - checks for uppercase alphabets
 * @c: the integer to be checked
 * Return: 1 or 0 depending on conditions
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
