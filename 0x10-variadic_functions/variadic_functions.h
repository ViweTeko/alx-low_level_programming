#ifndef VARIADIC_H_
#define VARIADIC_H_

int _putchar(char c);
int sum_them_all(const unsigned int a, ...);
void print_numbers(const char *separator, const unsigned int a, ...);
void print_strings(const char *separator, const unsigned int a, ...);
void print_all(const char * const format, ...);

/**
 * struct print - To print
 * @a: data type
 * @pr: function pointer print
 */

typedef struct print
{
	char *a;
	void (*pr)(va_list z);
} tp;

/**
 * print_char - print a char
 *
 * @arg: argument
 *
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
 *
 * @arg: argument
 *
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
 *
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

#endif
