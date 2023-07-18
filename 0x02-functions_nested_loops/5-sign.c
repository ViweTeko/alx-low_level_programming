#include "main.h"

/**
 * print_sign - prints sign of number
 *
 * @n: displays number sign
 *
 * Return: 1 if positive number, 0 if zero, -1 if less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
}
