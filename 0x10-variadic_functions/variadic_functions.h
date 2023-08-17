#ifndef VARIADIC_H_
#define VARIADIC_H_

#include <stdio.h>
#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int a, ...);
void print_numbers(const char *separator, const unsigned int a, ...);
void print_strings(const char *separator, const unsigned int a, ...);
void print_all(const char * const format, ...);

void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);

/**
 * struct print - To print
 * @a: data type
 * @pr: function pointer print
 */

typedef struct print
{
	char *a;
	void (*pr)(va_list arg);
} tp;

#endif
