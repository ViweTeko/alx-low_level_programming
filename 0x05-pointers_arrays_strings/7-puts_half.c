#include "main.h"

/**
 * puts_half - prints half a string
 *
 * @str: string input
 */

void puts_half(char *str)
{
	int e, f, g = 0;

	for (e = 0; str[e] != '\0'; ++e)
		++g;

	f = (g / 2);

	if ((g  % 2) == 1)
		f = ((g + 1) / 2);

	for (e = f; str[e] != '\0'; ++e)
		_putchar(str[e]);

	_putchar('\n');
}
