#include "main.h"

/**
 * print_rev_recursion/ - prints reverse 
 * @s: char pointer
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		putchar('\n');
	return;
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}


