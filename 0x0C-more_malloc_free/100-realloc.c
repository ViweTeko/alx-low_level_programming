#include <stdlib.h>
#include "main.h"

/**
 * _realloc - reallocates memory with malloc
 * @p: pointer to malloc
 * @old_size: size of malloc
 * @new_size: size of realloc
 *
 * Return: p
 */

void *_realloc(void *p, unsigned int old_size, unsigned int new_size)
{
	char *q, *r;
	unsigned int s;

	if (new_size == old_size)
		return (p);
	if (new_size == 0 && p)
	{
		free(p);
		return (NULL);
	}

	if (!p)
		return (malloc(new_size));

	q = malloc(new_size);
	if (!q)
		return (NULL);

	r = p;
	if (new_size < old_size)
	{
		for (s = 0; s < new_size; ++s)
			q[s] = r[s];
	}

	free(p);

	return (q);
}
