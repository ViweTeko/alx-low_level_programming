#include <stdlib.h>
#include "main.h"

/**
 * argstostr - a function that concatenates all the arguments
 *
 * @ac: argc
 * @av: argv
 *
 * Return: new string or NULL
 */

char *argstostr(int ac, char **av)
{
	int b = 0, c = 0, d, e;
	char *f;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (d = 0; d < ac; ++d)
	{
		for (e = 0; av[d][e]; ++e)
			++b;
	}

	b += ac;

	f = malloc(sizeof(char) * 1 + 1);

	if (f == NULL)
		return (NULL);

	for (d = 0; d < ac; ++d)
	{
		for (e = 0; e < av[d][e]; ++e)
		{
			f[c] = av[d][e];
			++c;
		}

	if (f[c] == '\0')
		f[++c] = '\n';
	}

	return (f);
}
