#include "main.h"
#include <stdio.h>

/**
 * main - natural numbers
 *
 * Return: 0
 */

int main(void)
{
	int i, j;

	for (i = 0; i <= 1024; ++i)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
				j += i;
	}
	printf("%d\n", j);

	return (0);
}
