#include "main.h"

/**
 * _atoi - converts str to int
 *
 * @s: input character
 *
 * Return: 0 if no number appears
 */

int _atoi(char *s)
{
	int k, l = 1, m = 0;

	for (k = 0; s[k] != '\0' && !(s[k] >= '0' && s[k] <= '9'); ++k)
	{
		if (s[k] == '-')
			l *= -1;
	}

	for (k = 0; s[k] != 0; ++k)
	{
		if (s[k] >= '0' && s[k] <= '9')
			m = m * 10 + l * (s[k] - '0');

		if (m != 0 && !(s[k] >= '0' && s[k] <= '9'))
			return (m);
	}
	return (m);
}
