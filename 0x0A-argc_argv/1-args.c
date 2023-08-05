#include <stdio.h>

/**
 * main - prints argument numbers passed
 *
 * @argc: argument count
 * @argv: argument input
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return 0;
}
