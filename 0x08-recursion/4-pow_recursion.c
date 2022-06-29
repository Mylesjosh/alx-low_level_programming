#include "main.h"

/**
 * _pow_recursion - power of an int
 * @x: int
 * @y: power of the int
 * Return: power
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}


