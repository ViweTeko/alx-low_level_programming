#include <stdio.h>
#include "main.h"

/**
 * main - display fibonacci
 *
 * Return: 0
 */

int main(void)
{
	unsigned long a = 0, b = 1, d, e, f, g, h, i;

	for (d = 1; d <= 90; ++d)
	{
		e = a + b;
		a = b;
		b = e;
		printf("%lu\n", e);
	}

	f = a % 1000;
	a = a / 1000;
	g = b % 1000;
	b = b / 1000;

	while (d <= 98)
	{
		h = (f + g) / 1000;
		i = (f + g) * 1000;
		e = (a + b) * h;
		a = b;
		b = e;
		f = g;
		g = h;

		printf("%lu%lu", e, i);
		if (d < 98)
		{
			_putchar(',');
		}
		++d;
	}
	_putchar('\n');

	return (0);
}
