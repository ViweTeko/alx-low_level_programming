#include <stdio.h>
#include "main.h"

/**
 * main - fibonacci
 *
 * Return: 0
 */

int main(void)
{
	int a;
	unsigned long b = 0, c = 1, d;
	for (a = 1; a <= 49; ++a)
	{
		d = b + c;
		b = c;
		c = d;

		printf("%lu, ", d);
	}
	printf("%lu\n", d + b);

	return (0);
}
