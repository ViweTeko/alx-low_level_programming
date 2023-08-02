#include "main.h"

/**
 * _puts_recursion - prints a string
 *
 * @s: string to be printed
 */

void _puts_recursion(char *s)
{
	int a = 0;

	if (s[a] != '\0')
	{
		_putchar(s[a]);
		_puts_recursion(&s[a + 1]);
	}
	else
		_putchar('\n');
}#include "main.h"

/**
 * _puts_recursion - prints a string
 *
 * @s: string to be printed
 */

void _puts_recursion(char *s)
{
	int a = 0;

	if (s[a] != '\0')
	{
		_putchar(s[a]);
		_puts_recursion(&s[a + 1]);
	}
	else
		_putchar('\n');
}
