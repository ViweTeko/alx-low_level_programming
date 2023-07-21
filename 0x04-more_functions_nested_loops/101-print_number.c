#include "main.h"

/**
 * print_number - prints an integer
 *
 * @w: the integer
 */

void print_number(int w)
{
	unsigned int v;

	if (w < 0)
	{
		v = -w;
		_putchar('-');
	}
	else
		v = w;
	if (v / 10)
		print_number(v / 10);
	_putchar((v % 10) + '0');
}
