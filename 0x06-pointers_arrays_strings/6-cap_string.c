#include "main.h"

/**
 * cap_string - prints capital string
 * @x: string param
 * Return: x
 */

char *cap_string(char *x)
{
	char spc[] = {32, 9, '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
	int lent = 13;
	int b = 0, i;

	while (x[b])
	{
		i = 0;
		while (i < lent)
		{
			if ((b == 0 || x[b - 1] == spc[i]) && (x[b] >= 97 && x[b] <= 122))
			{
				x[b] -= 32;
			}
		i++;
		}
		b++;
	}
	return (x);
}
