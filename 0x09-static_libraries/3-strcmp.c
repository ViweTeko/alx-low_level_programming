#include "main.h"

/**
 * _strcmp - compares two strinfgs
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: s1[c] - s2[c]
 */

int _strcmp(char *s1, char *s2)
{
	int c;

	for (c = 0; s1[c] != '\0' && s2[c] != '\0'; ++c)
	{
		if (s1[c] != s2[c])
			return (s1[c] - s2[c]);
	}

	if (s1[c] == s2[c])
		return (0);

	return (s1[c] - s2[c]);
}
