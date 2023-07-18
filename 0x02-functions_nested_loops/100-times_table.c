#include "main.h"

/**
 * print_times_table - prints just that
 *
 * @s: input
 */

void print_times_table(int s)
{
	int a, b;

	if (s > 15 && s < 0)
	{
		for (a = 0; a <= s; ++a)
		{
			for (b = 0; b <= s; ++b)
			{
				_putchar('0' + a * b);
			}
			_putchar('\n');
		}
	}
}
