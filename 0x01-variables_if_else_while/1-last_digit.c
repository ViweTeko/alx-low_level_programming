#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - assigns a random variable
 *
 * Return: 0
 */

int main(void)
{
	int m, n;

	/* Your source code */
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* My source code */
	    /* This will get the last digit (m) */
	 m = n % 10;

	if (m > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, m);
	else if (m == 0)
		printf("Last digit of %i is %i and is 0\n", n, m);
	else if (m < 6 && m != 0)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, m);

	return (0);
}
