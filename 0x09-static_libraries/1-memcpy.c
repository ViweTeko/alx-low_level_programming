#include "main.h"

/**
 * _memcpy - copies memory area
 *
 * @dest: the destination
 * @src: source memory area
 * @n: number of bytes
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	for (; n > 0; --n)
		dest[n - 1] = src[n - 1];

	return (dest);
}
