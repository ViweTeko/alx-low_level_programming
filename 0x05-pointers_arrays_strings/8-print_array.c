#include "main.h"

/**
 * print_array - prints the elements of an array
 *
 * @a: the pointer to array index
 * @n: the number of elements
 */

void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; ++b)
	{
		if (b != (n - 1))
			printf("%d, ", a[b]);
		else
			printf("%d", a[b]);
	}

	printf("\n");
}
