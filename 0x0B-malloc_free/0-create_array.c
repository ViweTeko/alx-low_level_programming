#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array
 *
 * @size: array size
 * @c: char
 *
 * Return: pointer or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *b;
	unsigned int a;

	b = malloc(sizeof(char) * size);

	if (size == 0 || b == NULL)
		return (NULL);

	for (a = 0; a < size; ++a)
		b[a] = c;

	return (b);
}
