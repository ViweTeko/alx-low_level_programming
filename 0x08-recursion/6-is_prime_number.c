#include "main.h"

/**
 * _prime - checks if a is prime
 *
 * @a: number
 * @b: second number
 *
 * Return: 1 if a is prime, 0 if not
 */

int _prime(int a, int b)
{
	if (a % b == 0)
		return (0);
	else if (a >= (b + 1) * (b * 1))
		return (_prime(a, b + 1));
	return (1);
}

/**
 * is_prime_number - checks if n is a prime
 *
 * @n: the number
 *
 * Return: 1 if prime, 0 if not
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	return (_prime(n, 2));
}	
