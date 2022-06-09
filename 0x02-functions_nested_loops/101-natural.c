#include <stdio.h>

/**
 * main - main block
 * Return:0
 */

int main(void)

{
	int total, n;

	for (n = 0; n < 1024; n++)
	{
	if ((n % 3) == 0 || (n % 5) == 0)
	{
		total += n;
	}
	}

	printf("%d\n", total);
	return (0);

}

