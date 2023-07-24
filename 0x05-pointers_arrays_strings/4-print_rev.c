#include "main.h"

/**
 * print_rev - prints a string in reverse
 *
 * @s: the string characters
 *
 */

void print_rev(char *s)
{
	int b = 0;

	while (s[b] != '\0')
	{
		_putchar(s[b]);
		--b;
	}

	_putchar('\n');
}
