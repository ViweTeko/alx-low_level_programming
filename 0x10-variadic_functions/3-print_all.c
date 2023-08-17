#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_all - prints anything
 * @format: lst of types of args
 */
void print_all(const char * const format, ...)
{
	va_list pa;
	int a = 0, b = 0;
	char *c = "";
	_print p[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(pa, format);

	while (format && format[a])
	{
		b = 0;
		while (b < 4 && (format[a] != *(p[b].a)))
			++b;
		if (b < 4)
		{
			printf("s", c);
			p[b].tp(pa);
			c =  ", ";
		}
		++b;
	}
	printf("\n");

	va_end(pa);
}
