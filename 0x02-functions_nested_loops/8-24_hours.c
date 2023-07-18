#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: 0
 */

void jack_bauer(void)
{
	int min, h;

	for (h = 0; h <= 23; ++h)
	{
		for (min = 0; min <= 59; ++min)
		{
			_putchar('0' + h / 10);
			_putchar('0' + h % 10);
			_putchar(':');
			_putchar('0' + min / 10);
			_putchar('0' + min % 10);
			_putchar('\n');
		}
	}
}
