#include "main.h"
#include <stdio.h>

/**
 * main - testing fizz buzz for multiples of 3 and 5
 *
 * Return: 0
 */

int main(void)
{
	int a;

	for (a = 0; a <= 100; ++a)
	{
		if (a % 3 == 0)
			printf("Fizz");
		if (a % 5 == 0)
			printf("Buzz");
		if (a % 3 == 0 && a % 5 ==0)
			printf("FizzBuzz");
		else
			printf("%d", a)
	}
	printf('\n');

	return (0);
}
