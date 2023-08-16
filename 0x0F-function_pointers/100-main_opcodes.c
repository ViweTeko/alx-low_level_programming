#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints opcodes
 *
 * @argc: arg counter
 * @argv: arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int c, b;
	char *d = (char *) main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	b = atoi(1[argv]);
	if (b < 0)
	{
		printf("Eror\n");
		exit(2);
	}

	for (c = 0; c < b; ++c)
	{
		printf("%02x", d[c] & 0xFF);
		if (c != b - 1)
			printf(" ");
	}
	printf("\n");

	return (0);
}
