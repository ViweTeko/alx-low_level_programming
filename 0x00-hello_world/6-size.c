#include <stdio.h>

/**
 * main - prints the size of various types on the computer it is compiled on
 *
 * Return: 0
 */

int main(void)
{
	char l;
	int m;
	long int n;
	long long int o;
	float p;

	printf("Size of a char: %lu byte(s)\n", sizeof(l));
	printf("Size of an int: %lu byte(s)\n", sizeof(m));
	printf("Size of a long int: %lu byte(s)\n", sizeof(n));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(o));
	printf("Size of a float: %lu byte(s)\n", sizeof(p));

	return (0);
}
