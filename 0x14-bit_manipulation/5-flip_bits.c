#include "main.h"

/**
 * flip_bits - inverts the bits
 * @n: first bit
 * @m: second bit
 *
 * Return: n and m
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int o = 0;

	n = n ^ m;
	while (n > 0)
	{
		if (n & 1)
			++o;
		n = n >> 1;
	}

	return (o);
}
