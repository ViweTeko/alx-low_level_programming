#include "main.h"

/**
 * print_diagonal - prints diagonally
 *
 * @q: the integer
 *
 */

void print_diagonal(int q)
{
	int x, y;

	for (y = 1; y <= q; y++)
	{
		for (x = 1; x < y; x++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
	if (q < 1)
		_putchar('\n');
}
