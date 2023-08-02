#include "main.h"

/**
 * _memset - fills a block of memory
 *
 * @s: memory area
 * @b: constant byte(s)
 * @n: number of bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; ++a)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
