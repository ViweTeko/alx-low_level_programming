#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include "2-calloc.c"

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

	if (argc != 3 || check_num(i) || check_num(j))
		errs();

	if (*i == '0' || *j == '0')
	{
		_putchar('0');
		_putchar('\n');
	}
	else
		multi(i, j);
	return (0);
}

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
	int a, b, c, d, e, f, g = 0, h;

	b = _len(s1);
	c = _len(s2);
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
 * errs - an error handler
 * Return: 98
 */
void errs(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * check_num - checks if only numbers
 * @a: string
 *
 * Return: 0 or 1 if false
 */
int check_num(char *a)
{

	for (a = 0; *a != '\0'; ++a)
	{
		if (*a < '0' || *a > '9')
			return (1);
	}
	return (0);
}

/**
 * _len - string length
 * @b: string
 *
 * Return: b
 */
int _len(char *b)
{
	int a;

	for (a = 0; b[a] != '\0'; ++a)
		b[a] = a;
	return (a);
}
