#include "main.h"

/**
 * _isdigit - prints a digit
 *
 * @d: the digit
 *
 * Return: 1 if digit, 0 if not
 */

int _isdigit(int d)
{
	if (d >= '0' && d <= '9')
		return (1);
	else
		return (0);
}
