#include "main.h"

/**
 * leet - convert to string
 *
 * @a: input value
 *
 * Return: a
 */

char *leet(char *a)
{
	int b, c;

	char x[] = "aAeEoOtTlL", y[] = "4433007711";

	for (b = 0; a[b] != '\0'; ++a)
	{
		for (c = 0; c < 10; ++c)
		{
			if (a[b] == x[c])
				a[b] = y[c];
		}
	}

	return (a);
}
