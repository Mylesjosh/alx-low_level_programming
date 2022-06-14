#include "main.h"

/**
 * swap - swap the value of parameter a to b
 * @a: parameter a
 * @b: parameter b
 */

void swap_int(int *a, int *b);
{
	int new;
	
	new = *a;
	*a = *b;
	*b = new;
}


