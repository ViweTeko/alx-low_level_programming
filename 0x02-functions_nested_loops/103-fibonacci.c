#include <stdio.h>
#include "main.h"

/**
 * main - prints out fibonacci sequence
 *
 * Return: 0
 */

int main(void)
{
	unsigned long a, b = 0, c = 1, d = 0;

	while (a < 4000000)
	{
		a = b + c;
		b = c;
		c = a;

		if ((a % 2) == 0)
			d += a;
	}
	printf("%lu\n", d);

	return (0);
}
