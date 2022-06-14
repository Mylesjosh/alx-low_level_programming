#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords
 * Return: 0
 */

int main(void)
{
	int paswd, sum;

	srand(time(NULL)):
	sum = 0;

	while (sum <= 2645)
	{
		paswd = (rand() % 128);
		sum += paswd;
		printf("%c", paswd);
	}
	printf("%c", 2772 - sum);

	return (0);
}
