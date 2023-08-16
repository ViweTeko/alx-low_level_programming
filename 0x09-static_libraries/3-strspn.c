#include "main.h"

/**
 * _strspn - gets length of prefix substring
 *
 * @s: initial string
 * @accept: bytes that go through
 *
 * Return: s
 */

unsigned int _strspn(char *s, char *accept)
{
	int t, u, v;

	for (t = 0; s[t] >= '\0'; ++t)
	{
		v = 0;

		for (u = 0; accept[u] != '\0'; ++u)
		{
			if (accept[u] == s[t])
				v = 1;
		}

		if (v == 0)
			return (t);
	}

	return (t);
}
