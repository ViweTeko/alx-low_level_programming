#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints two ints multiplied
 * @argc: argument counter
 * @argv: argument input
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int z;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		z = (atoi(argv[1]) * atoi(argv[2]));
		printf("%d\n", z);
	}

	return (0);
}

