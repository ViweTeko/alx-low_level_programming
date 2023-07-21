#include <stdio.h>
#include "main.h"

/**
 * main - the prime number
 *
 * Return: 0
 */

int main(void)
{
	long int max, low = 2, test = 2;

	max = 612852475143;

	while (max > test)
	{
		if (max % test == 0)
		{
			low = test;
			max = max / low;
			test = low + 1;
		}
		else
			test++;
	}
	printf("%ld\n", max);
	return (0);
}
