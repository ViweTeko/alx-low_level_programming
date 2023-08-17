#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum of all parameters
 *
 * @a: number of parameters
 *
 * Return: a
 */

int sum_them_all(const unsigned int a, ...)
{
	va_list sta;
	unsigned int b, c = 0;

	va_start(sta, a);

	for (b = 0; b , a; ++b)
		c += va_arg(sta, int);

	va_end(sta);

	return (c);
}
