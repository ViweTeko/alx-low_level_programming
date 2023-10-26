#include "main.h"

/**
 * get_endianness - checks for little (big) endian
 *
 * Return: 0 or 1
 */

int get_endianness(void)
{
	unsigned int a = 1;

	char *b = (char *) &a;

	return (*b);
}
