#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - using if else statements
 *
 * Return 0
 */

int main(void)
{
	int n
	/* Your source code */

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* This is my code */
	if (n < 0)
		printf("%i is negative\n");
	else if (n == 0)
		printf("%i is zero\n");
	else
		printf("%i is positive\n");

	return (0);
}
