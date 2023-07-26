#include "main.h"

/**
 * _strcpy - copies a string
 *
 * @dest: destination for input
 * @src: source input
 * @n: the integer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int o;

	for (o = 0; o < n && src[o] != '\0'; ++o)
		dest[o] = src[o];

	for ( ; o < n; ++o)
		dest[0] = '\0';

	return (dest);
}
