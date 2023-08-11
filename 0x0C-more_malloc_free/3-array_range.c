#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum int
 * @max: maximum int
 *
 * Return: pointer to new array
 */

int *array_range(int min, int max)
{
	int a, b, *c;

	if (min > max)
		return (NULL);

	b = max - min + 1;
	c = malloc(sizeof(int) * b);

	if (c == NULL)
		return (NULL);

	for (a = 0; min <= max; ++a)
		c[a] = min++;

	return (c);
}
