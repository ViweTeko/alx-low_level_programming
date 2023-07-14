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
	int n;

	/* Your source code */
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* My source code */
	if (n < 0)
		printf("%i is negative\n", n);
	else if (n == 0)
		printf("%i is zero\n", n);
	else
		printf("%i is positive\n", n);

	return (0);
}
