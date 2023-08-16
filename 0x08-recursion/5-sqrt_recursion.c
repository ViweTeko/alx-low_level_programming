#include "main.h"
/**
 * _sqr - checks the square
 * @m: first int
 * @o: second int
 * Return: sqr
 */

int _sqr(int m, int o)
{
	if (m == o * o)
		return (o);
	else if (m < o * o)
		return (-1);

	return (_sqr(m, o + 1));
}

/**
 * _sqrt_recursion - finds square root of n
 *
 * @n: root number
 *
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqr(n, 0));
}
