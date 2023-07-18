#include "main.h"

/**
 * times_table - shows 9 times table
 *
 * Return: 0
 */

void times_table(void)
{
	int d, e, f;

	for (d = 0; d <= 9; ++d)
	{
		_putchar('0');
		for (e = 1; e <= 9; ++e)
		{
			_putchar(',');
			_putchar(' ');

			f = d * e;

			if (f > 9)
				_putchar((f / 10) + '0');
			else
				_putchar(' ');

			_putchar((f % 10) + '0');
		}
		_putchar('\n');
	}
}
