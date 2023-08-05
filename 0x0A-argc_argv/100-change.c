#include <stdio.h>
#include <stdlib.h>

/**
 * main - pints change using minimum coins
 * @argc: argument counter
 * @argv: argument input
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int c, d;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	c = atoi(argv[1]);

	for (d = 0; c > 0; ++d)
	{
		if (c >= 25)
			c -= 25;
		else if (c >= 10)
			c -= 10;
		else if (c >= 5)
			c -= 5;
		else if (c >= 2)
			c -= 2;
		else if (c >= 1)
			c -= 1;
	}
	printf("%d\n", d);

	return (0);
}
