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

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 0)
		printf("%i is negative\n");
	else if (n == 0)
		printf("%i is zero\n");
	else
		printf("%i is positive\n");

	return (0);
}
