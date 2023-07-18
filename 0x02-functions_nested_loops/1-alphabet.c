#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints lowercase alphabets
 *
 */

void print_alphabet(void)
{
	char low;

	for (low = 'a'; low <= 'z'; ++low)
	{
		_putchar(low);
		++low;
	}

	_putchar('\n\);
}
