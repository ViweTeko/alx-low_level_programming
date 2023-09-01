#include "main.h"

/**
 * clear_bit - clears the bit to zero
 * @n: bit(s)
 * @index: to clear
 *
 * Return: 1 or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	m = *n ^ 1 << index;
	*n *n & m;

	return (1);
}
