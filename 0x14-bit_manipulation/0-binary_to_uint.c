#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: char to convert
 *
 * Return: b
 */

unsigned int binary_to_uint(char *b)
{
	unsigned int a = 0;
	int c;

	if (b == NULL)
		return (0);

	for (c = 0; b[c] != NULL; ++c)
	{
		if (b[c] < '0' || b[c] > '1')
			return (0);
		a = 2 * a + (b[c] - '0');
	}
	return (a);
}

