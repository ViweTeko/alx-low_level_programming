#include "main.h"

/**
 * print_binary - prints binary of decimal
 * @n: decimal to convert
 */

void print_binary(unsigned long int n)
{
	unsigned long int a;

	a = n;

	if (n < 2)
	{
		_putchar(n + '0');
		return;
	}
	else
	{
		print_binary(n >> 1);
		a = a & 1;
		_putchar(a + '0');
	}
}
