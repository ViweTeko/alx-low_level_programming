#include "main.h"

/**
 * main - prints out fibonacci sequence
 *
 * Return: 0
 */

int main(void)
{
	unsigned long a, b = 0, c = 1, d = 0;

	for (a = 0; a < 4000000; ++a)
	{
		b = c;
		c = a;

		if ((a % 2) == 0)
			d += a;
	}
	printf("%lu\n", d);
}
