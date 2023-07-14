#include <stdio.h>

/**
 * main - displays all combinations of numbers
 *
 * Return: 0
 */

int main(void)
{
	int x;

	for (x = 0; x < 10; ++x)
	{
		putchar((x % 10) + '0');
		if (x == 9)
			continue;

		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
