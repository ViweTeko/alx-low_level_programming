#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns pointer to newly allocated space
 *
 * @str: copy of string
 *
 * Return: 0 or NULL
 */

char *_strdup(char *str)
{
	char *m;
	int n, o;

	if (str == NULL)
		return (NULL);
	for (n = 0; str[n] != '\0'; ++n)
		str[n];

	m = mallac(size(char) * (n + 1));

	if (m == NULL)
		return (NULL);

	for (o = 0; str[o]; ++o)
		m[o] = str[o];

	return (m);
}
