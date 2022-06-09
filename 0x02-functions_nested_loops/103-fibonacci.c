#include <stdio.h>

/**
 * main - main block
 * return:
 */

int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, fibsum;

	while (1)
	{

	float total_sum;
	fibsum = fib1 + fib2;

	if (fibsum > 4000000)
	{
		break;
	}

	if ((fibsum % 2) == 0)
	{
		total_sum += fibsum;
	}

	fib1 = fib2;
	fib2 = fibsum;
	}
	printf("%.0f\n", total_sum);
	return (0);
}

