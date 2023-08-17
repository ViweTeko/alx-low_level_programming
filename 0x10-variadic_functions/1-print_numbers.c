#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers
 *
 * @separator: string separation
 * @a: parameter numbers
 */

void print_numbers(const char *separator, const unsigned int a, ...)
{
	va_list zz;
	unsigned int b;

	va_start(zz, a);

	for (b = 0; b < a; ++b)
	{
		printf("%d", va_arg(zz, int));
		if (separator != NULL && b < a - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(zz);
}
