#include "main.h"

/**
 * _strlen_recursion - returns length of string
 *
 * @s: String
 *
 * Return: r
 */

int _strlen_recursion(char *s)
{
	int r = 0;

	if (*s)
	{
		++r;
		r += _strlen_recursion(s + 1);
	}

	return (r);

}
