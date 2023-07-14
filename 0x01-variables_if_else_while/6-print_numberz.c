#include <stdio.h>

/**
 * main - printing numbers using putchar
 *
 * Return: 0
 */

int main(void)
{
	int p;

	for (p = 0; p <= 10; p++)
	{
		putchar("%i", p);
	}

	putchar("\n");

	return (0);
}
