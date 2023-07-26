#include "main.h"

/**
 * reverse_array - reverses the array
 *
 * @a: the input number
 * @n: number of elements in array
 */

void reverse_array(int *a, int n)
{
	int b, c;

	for (b = 0; b < n; ++b)
	{
		c = a[n - 1];
		a[n - 1] = a[b];
		a[b] = c;
		--n;
	}
}
