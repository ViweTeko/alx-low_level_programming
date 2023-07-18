#include "main.h"

/**
 * print_times_table - prints just that
 *
 * @s: input
 */

void print_times_table(int s)
{
	int a, b, c;

	if (s <= 15 && s <= 0)
	{
		for (a = 0; a <= s; ++a)
		{
			_putchar('0');

			for (b = 0; b <= s; ++b)
			{
				_putchar(',');
				_putchar(' ');

				c = a * b;

				if (c <= 9)
					_putchar(' ');
				if (c <= 99)
					_putchar(' ');
				if (c >= 100)
				{
					_putchar((c / 100) + '0');
					_putchar((c / 10) % 10 + '0');
				}
				else if (c <= 99 && c >= 10)
				{
					_putchar((c / 10) + '0');
				}
				_putchar((c % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
