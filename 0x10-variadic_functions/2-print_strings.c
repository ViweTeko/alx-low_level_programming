#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_strings - prints a string
 * @separator: the separator
 * @a: num of parameters
 */

void print_strings(const char *separator, const unsigned int a, ...)
{
	va_list ps;
	unsigned int b;
	char *c;

	va_start(ps, a);

	for (b = 0; b < a; ++b)
	{
		c = va_arg(ps, char *);
		if (c != NULL)
			printf("%s", c);
		else
			printf("%s", c);
		if (separator != NULL && b < a - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ps);
}
