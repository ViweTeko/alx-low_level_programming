#include "main.h"

/**
 * string_toupper - converts string to uppercase
 *
 * @a: character string
 *
 * Return: a
 */

char *string_toupper(char *a)
{
	int b;

	for (b = 0; a[b] != '\0'; ++b)
	{
		if (a[b] >= 'a' && a[b] <= 'z')
			a[b] -= 32;
	}

	return (a);
}
