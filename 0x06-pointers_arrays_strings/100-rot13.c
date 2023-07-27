#include "main.h"

/**
 * rot13 - encoding a number
 *
 * @a: the character
 *
 * Return: a
 */

char *rot13(char *a)
{
	int b;
	int c;
	char first[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char sec[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (b = 0; a[b] != '\0'; ++b)
	{
		for (c = 0; c < 52; ++c)
		{
			if (a[b] == first[c])
			{
				a[b] = sec[c];
				break;
			}
		}
	}
	return (a);
}
