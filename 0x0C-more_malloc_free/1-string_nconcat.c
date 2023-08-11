#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 *
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int t, u, v, w;

	for (v = 0; s1 && s1[v]; ++v)
		s1[v] = v;
	for (w = 0; s2 && s2[w]; ++w)
		s2[w] = w;

	if (n < v)
		s3 = malloc(sizeof(char) * (v + n + 1));
	else
		s3 = malloc(sizeof(char) * (v + w + 1));

	if (!s3)
		return (NULL);

	for (t = 0; t < v; ++t)
		s3[t] = s1[t];
	for (u = 0; n < w && t < (v + n); ++u, ++t)
		s3[t] = s2[u];
	for (; n >= w && t < (v + w); ++t, ++u)
		s3[t] = s2[u];

	s3[t] = '\0';

	return (s3);
}
