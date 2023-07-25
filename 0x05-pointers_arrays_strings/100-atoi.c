#include "main.h"

/**
 * _atoic - converts str to int
 *
 * @s: input character
 *
 * Return: 0 if no number appears
 */

void _atoic(char *s)
{
	int k = 0, l = 1, m = 0;

	while (s[k] == ' ')
		++k;

	if (s[k] == '-')
	{
		l = -1;
		++k;
	}
	else if (s[k] == '+')
		++k;

	while (s[k] >= '0' && s[k] <= '9')
	{
		m *= 10;
		m += s[k] - '0';
		++k;
	}
	return (m * l);
}
