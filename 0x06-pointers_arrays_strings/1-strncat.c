#include "main.h"

/**
 * _strncat - concatonates two strings
 *
 * @dest: destination string
 * @src: string that will be concatonated
 * @n: the integer
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	while (dest[b] != '\0')
		++b;

	for (a = 0; a < n &&  src[a] != '\0';++a)
	{
		dest[b + a] = src[a];
		++b;
	}

	return (dest);
}
