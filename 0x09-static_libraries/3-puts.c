#include "main.h"

/**
 * _puts - a function that puts
 * @str: string parameter
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}

