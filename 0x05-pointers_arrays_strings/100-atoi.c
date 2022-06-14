#include "main.h"
#include <stdio.h>

/**
 * _atoi - converts strings to integers
 * @s: string variable pointer
 * Return: int
 */

int _atoi(char *s)
{
	int index, ind2;
	unsigned int res;
	int sign = 1;
	char new;

	index = 0;
	res = 0;
	while (*(s + index) != '\0')
	{
		new = *(s + index);
		if (new == '-')
		{
			sign *= -1;
		}
		if (new >= '0' && new <= '9')
		{
			ind2 = index;
			while (*(s + ind2) > 47 && *(s + ind2) < 58)
			{
				res = (res * 10) + *(s + ind2) - '0';
				ind2++;
			}
			break;
		}
		index++;
	}
	if (sign < 0)
	{
		res *= sign;
	}
	return (res);
}
