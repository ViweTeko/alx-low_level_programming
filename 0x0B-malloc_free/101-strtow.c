#include <stdlib.h>
#include "main.h"

/**
 * counting - counts the words
 * @a: string to be counted
 *
 * Return: d
 */

int counting(char *a)
{
	int b = 0, c, d = 0;

	for (c = 0; a[c] != '\0'; ++c)
	{
		if (a[c] == ' ')
			b = 0;
		else if (b == 0)
		{
			b = 1;
			++d;
		}
	}
	return (d);
}

/**
 * strtow - splits string into words
 * @str: the string
 *
 * Return: word
 */

char **strtow(char *str)
{
	char **word, *txt;
	int e, f = 0, g = 0, h, i = 0, j, k;

	while (*(str + g))
		++g;
	h = counting(str);
	if (h == 0)
		return (NULL);

	word = (char **) malloc(sizeof(char *) * (h + 1));
	if (word == NULL)
		return (NULL);

	for (e = 0; e <= g; ++e)
	{
		if (str[e] == ' ' || str[e] == '\0')
		{
			if (i)
			{
				k = e;
				txt = (char *) malloc(sizeof(char) * (i + 1));
				if (txt == NULL)
					return (NULL);
				while (j < k)
					*txt++ = str[++j];
				*txt = '\0';
				word[f] = txt - i;
				++f;
				i = 0;
			}
			else if (++i == 0)
				j = e;
		}
	}

	word[f] = NULL;

	return (word);
}
