#include "main.h"

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

	return (sqr_con(n, 0));
}
