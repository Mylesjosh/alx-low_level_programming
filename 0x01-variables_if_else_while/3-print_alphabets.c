#include <stdio.h>

/**
 * main - main block
 * Return:0
 */

int main(void)
{
	int ch;
	int ch1;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	putchar(ch);
	}
	for (ch1 = 'A'; ch1 <= 'Z'; ch1++)
	{
	putchar(ch1);
	}
	putchar('\n');
	return(0);

}
