#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: s1 and s2 concatenated
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;
	int t = 0, u = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[t] != '\0')
		++t;

	while (s2[u] != '\0')
		++u;

	s3 = malloc(sizeof(char) * (t + u + 1));

	if (s3 == NULL)
		return (NULL);

	for (t = 0; s1[t] != '\0'; ++t)
		s3[t] = s1[t];
	for (u = 0; s2[u] != '\0'; ++u)
	{
		s3[t] = s2[u];
		++t;
	}
	s3[t] = '\0';

	return (s3);
}
