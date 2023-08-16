#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - prints simple operations
 *
 * @argc: argument counter
 * @argv: argument
 *
 * Return: 0
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int y, z;
	char *x;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	y = atoi(argv[1]);
	z = atoi(argv[3]);
	x = argv[2];

	if (get_op_func(x) == NULL || x[1] != '\0')
	{
		printf("Error\n");
		exit(98);
	}

	if ((*x == 47 || *x == 37) && z == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(x)(y, z));

	return (0);
}
