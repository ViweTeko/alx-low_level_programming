#include <stdio.h>

/**
 * main - prints every argument
 * @argc: argument counter
 * @argv: argument input
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; ++a)
		printf("%s\n", argv[a]);

	return (0);
}
