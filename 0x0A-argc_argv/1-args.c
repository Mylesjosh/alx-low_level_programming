#include <stdio.h>
/**
 *  main - main block
 *  @argc: argument count
 *  @argv: argument vector
 *  Return: 0 - success.
 */
int main(int argc, char *argv[0])
{
	(void)*argv[0];

	printf("%d\n", argc - 1);
	return (0);
}
