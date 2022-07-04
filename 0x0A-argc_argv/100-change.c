#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * @argc: number of command line argument
 * @argv: array of command line argument
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	int num, i, coins, change = 0;

	coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	if (argc < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		while (num >= coins[i])
		{
			num -= coins[i];
			change++;
		}
	}
	printf("%d\n", change);
	return (0);
}
