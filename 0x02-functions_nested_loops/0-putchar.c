#include "main.h"

/**
 * main - creates a program that prints putchar
 *
 * Return: 0
 */

int main(void)
{
	char *p = "_putchar";

	while (*p)
	{
		_putchar(*p);
		++*p;
	}

	_putchar('\n');
	return (0);
}
