#include "main.h"

/**
 * _strlen_recursion - returns length of string
 *
 * @s: String
 *
 * Return: strlen
 */

int _strlen_recursion(char *s)
{
	int r;

	if (s[0] == '\0')
		return (0);

	if (s[1] == '\0')
		return (1);
	else
		return (_strlen_recursion(&s[r] + 1));

}
