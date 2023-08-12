#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include "2-calloc.c"

/**
 * multi - multiples array
 * @s1: first string
 * @s2: second string
 *
 * Return: 0
 */

void multi(char *s1, char *s2)
{
	char *p;
	void *q;
	int a, b = _length(s1), c = length(s2), d, e, f, g = 0, h;

	h = c;
	d = b + c;
	p = calloc(sizeof(int), d);

	q = p;

	for (--b; b >= 0; --b)
	{
		e = s1[b] -'0';
		g = 0;
		c = h;
		for (--c; c >= 0; --c)
		{
			f = s2[c] - '0';
			g += p[b + c + 1] + (e * f);
			p[b + c + 1] = g % 10;
			g /= 10;
		}
		if (g)
			p[b + c + 1] = g % 10;
	}

	while (*p == 0)
	{
		++p;
		--d;
	}

	for (a = 0; a < d; ++a)
		printf("%i", p[a]);
	printf("\n");
	free(q);
}

/**
 * main - multiplies two positive numbers
 * @argc: argument count
 * @argv: array of argument
 *
 * Return: 0 or 98
 */

int main(int argc, char *argv[])
{
	char *i = argv[1], *j = argv[2];

	if (argc != 3 || check_number(i) || check_number(j))
		error_exit();

	if (*i == '0' || *j == '0')
	{
		_putchar('0');
		_putchar('\n');
	}
	else
		multi(i, j);
	return (0);
}
