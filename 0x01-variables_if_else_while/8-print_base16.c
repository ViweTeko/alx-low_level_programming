#include <stdio.h>

/**
 * main - displaying hexadecimal numbers
 *
 * Return: 0
 */

int main(void)
{
	int x;
	char low;

	/* Digits first */
	for (x = 0; x <= 9; ++x)
	{
		putchar((x % 16) + '0');
	}
	/* Alphabets next */
	for (low = 'a'; low <= 'f'; low++)
	{
		putchar(low);
	}

	putchar('\n');

	return (0);
}
