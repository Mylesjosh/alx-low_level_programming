#include "main.h"

/**
 * _put - a function that puts
 * @str: string parameter
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar(\n);
}

