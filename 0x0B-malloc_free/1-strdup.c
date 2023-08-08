#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns pointer to newly allocated space
 *
 * @str: copy of string
 *
 * Return: m or NULL
 */

char *_strdup(char *str)
{
	char *m;
	int n, o;

	if (str == NULL)
		return (NULL);
	n = 0;
	while (str[n] != '\0')
			++n;

	m = malloc(sizeof(char) * (n + 1));

	if (m == NULL)
		return (NULL);

	for (o = 0; str[o]; ++o)
		m[o] = str[o];

	return (m);
}
