#include "main.h"

/**
 * print_number - prints an integer
 *
 * @n: integer to be printed
 *
 * Return: 0
 */

void print_number(int n)
{
	int o = n;

	if (n < 0)
	{
		_putchar('-');
		o = -n;
	}

	if (o / 10 != 0)
		print_number(o / 10);

	_putchar((o % 10) + '0');
}
