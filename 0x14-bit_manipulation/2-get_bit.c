#include "main.h"

/**
 * get_bit - gets bit value
 * @n: bit
 * @index: place of n
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	n = (n >> index) & 1;

	return (n);
}
