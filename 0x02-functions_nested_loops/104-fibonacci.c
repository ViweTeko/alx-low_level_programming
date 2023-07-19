#include <stdio.h>
#include "main.h"

/**
 * main - display fibonacci
 *
 * Return: 0
 */

int main(void)
{
	unsigned long a = 0, b = 1, c = 1000000000, d, e, f, g, h, i;

	printf("%lu", b);

	for (d = 1; d <= 90; ++d)
	{
		e = a + b;
		a = b;
		b = e;
		printf(", %lu", e);
	}

	f = a % c;
	a = a / c;
	g = b % c;
	b = b / c;

	while (d <= 98)
	{
		h = (f + g) / c;
		i = (f + g) - h  * c;
		e = (a + b) + h;
		a = b;
		b = e;
		f = g;
		g = i;

		if (d < 98)
			printf(", %lu%lu", e, i);
		else
			printf(", %lu%lu", e, i);
		++d;
	}
	_putchar('\n');

	return (0);
}
