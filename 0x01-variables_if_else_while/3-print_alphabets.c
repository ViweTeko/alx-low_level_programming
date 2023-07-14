#include <stdio.h>

/**
 * main - displaying lower and upper case alphabets
 *
 * Return: 0
 */

int main(void)
{
	char low, UP;

	for (low = 'a'; low <= 'z'; low++)
	{
		putchar(low);
	}

	for (UP = 'A'; UP <= 'Z'; UP++)
	{
		putchar(UP);
	}

	putchar('\n');

	return (0);
}
