#include "main.h"

/**
 * cap_string - capitalizes the string
 *
 * @a: the character
 * Return: a
 */

char *cap_string(char *a)
{
	int b;

	for (b = 0; a[b] != '\0'; ++b)
	{
		if(a[b] >= 'a' && a[b] <= 'z')
		{
			if (b == 0)
				a -= 32;

			if ( a[b - 1] == ' ' || a[b - 1] == '\t' || a[b - 1] == '\n'
				|| a[b - 1] == ',' || a[b - 1] == ';' || a[b - 1] == '.'
				|| a[b - 1] == '!' || a[b - 1] == '?' || a[b - 1] == '('
				|| a[b - 1] == ')' || a[b - 1] == '{' || a[b - 1] == '}' || b == 0)
				a -= 32;
		}
	}

	return (a);
}
