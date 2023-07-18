#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - printing to 98 in order
 *
 * @h: output
 */

void print_to_98(int h)
{
	if (h < 98)
		for (h = h; h <= 97; ++h)
			printf("%d, ", h);
	else
		for (h = h; h > 98; --h)
			printf("%d, ", h);
	printf('98\n');
}
