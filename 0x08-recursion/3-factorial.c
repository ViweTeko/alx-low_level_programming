#include "main.h"

/**
 * factorial - prints factorial of n
 *
 * @n: input number to be factored
 *
 * Return: 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	n = factorial(n - 1) * n;
	return (n);

}
