#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: lst of types of args
 */
void print_all(const char * const format, ...)
{
	va_list pa;
	int a = 0, b = 0;
	char *c = "";
	tp p[] = {
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
			printf("%s", c);
			p[b].pr(pa);
			c =  ", ";
		}
		++b;
	}
	printf("\n");

	va_end(pa);
}

/**
 * print_char - print a char
 * @arg: argument
 *
 * Return: nothing
 */

void print_char(va_list arg)
{
	char a = va_arg(arg, int);

	printf("%c", a);
}

/**
 * print_int - print an integer
 * @arg: argument
 *
 * Return: nothing
 */

void print_int(va_list arg)
{
	int a = va_arg(arg, int);

	printf("%d", a);
}

/**
 * print_float - print a float
 * @arg: argument
 *
 * Return: nothing
 */

void print_float(va_list arg)
{
	float a = va_arg(arg, double);

	printf("%f", a);
}

/**
 * print_string - print a string
 * @arg: argument
 *
 * Return: nothing
 */

void print_string(va_list arg)
{
	char *a = va_arg(arg, char *);

	if (a == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", a);
}
