#include "main.h"

/**
 * _strstr - locates a substring
 *
 * @haystack: string
 * @needle: substring
 *
 * Return: haystack or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	char *y, *z;

	for (; *haystack != '\0'; ++haystack)
	{
		*y = haystack;
		*z = needle;

		for (; *l == *p && *p != '\0'; ++p)
			++l;

		if (*p == '\0')
			return (haystack);
	}

	return (0);
}
