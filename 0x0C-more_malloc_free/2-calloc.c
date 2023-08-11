#include "main.h"
#include <stdlib.h>

/**
 * _memset - fills memory
 * @a: string to be filled
 * @b: string to copy
 * @c: number of copies
 *
 * Return: b
 */

char *_memset(char *a, char b, unsigned int c)
{
	unsigned int d;

	for (d = 0; d < c; ++d)
		a[d] = b;

	return (b);
}

/**
 * _calloc - allocates memory for array
 * @nmemb: elements in the array
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *c;
	unsigned int smem = nmemb * size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	c = malloc(smem);

	if (c == NULL)
		return (NULL);

	_memset(c, 0, smem);
	return (c);
}
