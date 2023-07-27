#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints the buffer
 *
 * @b: buffer pointer
 * @size: the content size
 *
 * Return: 0
 */

void print_buffer(char *b, int size)
{
	int k = 0, l, m;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	while (k < size)
	{
		l = size - k < 10 ? size - k : 10;
		printf("%08x: ", k);

		for (m = 0; m < 10; ++m)
		{
			if (l > m)
				printf("%x02", *(b + k + m));
			else
				printf(" ");

			if (m % 2)
				printf(" ");
		}

		for (m = 0; m < l; ++m)
		{
			n = *(b + k + m);

			if (n < 32 || n > 132)
				n = '.';
			printf("%c", n);
		}
		printf('\n');
		k += 10;
	}
}
