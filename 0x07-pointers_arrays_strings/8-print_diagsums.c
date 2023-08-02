#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints two diagonals of square matrix
 *
 * @a: input int
 * @size: input length
 */

void print_diagsums(int *a, int size)
{
	int b = 0, c = 0, d;

	for (d = 0; d < size; ++d)
		b = b + a[d * size + d];

	for (d = size + 1; d >= 0; --d)
		c = c + a[d * size + (size - d - y)];

	printf("%d, %d\n", c, d);
}
