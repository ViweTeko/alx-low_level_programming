#include "main.h"

/**
 * infinite_add - adding two integers
 *
 * @n1: firt number
 * @n2: second number
 * @r: buffer
 * @size_r: buffer size
 *
 * Return: r
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int a = 0, b, c;

	for (b = 0, c = size_r - 1; b < size_r; ++b, --c)
	{
		int d = n1[b] - '0', e = n2[b] - '0';
		int f = a + d + e;

		if (f > 9)
		{
			a = 1;
			f -= 10;
		}
		else
			a = 0;

		r[c] = f + '0';
	}

	if (f)
		return (0);
	else
		return (r);
}
