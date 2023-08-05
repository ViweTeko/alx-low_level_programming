#include <stdlib.h>
#include <stdio.h>

/**
 * is_num - checks if string is a number
 * @y: character check
 *
 * Return: 0 if non-number, 1 if number
 */

int is_num(char *y)
{
	int z;

	for (z = 0; y[z] != '\0'; ++z)
	{
		if (y[z] < '0' || y[z] > '9')
			return (0);
	}

	return (1);
}

/**
 * main - adds numbers
 * @argc: argument counter
 * @argv: argument input array
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int w = 0, x;

	for (x = 0; x < argc; ++x)
	{
		if (is_num(argv[x]) == 0)
		{
			printf("Error\n");
			return (1);
		}

		if (atoi(argv[x]) <= 0)
		{
			printf("Error\n");
			return (1);
		}

		w += atoi(argv[x]);
	}
	printf("%d\n", w);
		return (0);
}

