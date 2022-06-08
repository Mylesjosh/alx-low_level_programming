include "main.h"

/**
 * print_sign - Prints the sign of a number.
 * @n: The number of which the sign will be printed.
 * Return: returns either 1, 0 or -1 depending on the condition
 */

int print_sign(int n)

{
	if (n > 0)
	{
	_putchar('+');
	return (0);
	}

	else if (n == 0)
	{
	_putchar('0');
	return (0);
	}

	else
	{
	_putchar('-');
	return (-1);
	}
}
