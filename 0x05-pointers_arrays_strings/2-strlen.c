#include "main.h"

/**
 * _strlen - the length of the string
 *
 * @s: the characters
 */

int _strlen(char *s)
{
	int t = 0;

	while (s[t] != '\0')
	{
		++t;
	}

	return (t);
}
