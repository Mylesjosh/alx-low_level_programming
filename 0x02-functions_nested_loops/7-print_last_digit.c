#include "main.h"

/**
 * -print_last_digit - prints the last digit of a number
 * @n: the number of which the last digit is to be found
 * Return: returns the value of the last digit
 */

int print_last_digit(int n)
{
	ldigit = n % 10;
	
	if (ldigit < 0)
	{
		ldigit *= -1;
	}

	_putchar(ldigit + '0');
	return (ldigit);

}
