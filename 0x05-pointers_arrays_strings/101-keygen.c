#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - creates random generated paasword
 *
 * Return: 0
 */

int main(void)
{
	int q[100], r, s = 0, t;

	srand(time(NULL));

	for (r = 0; r < 100; ++r)
	{
		q[r] = rand() % 78;
		s += (q[r] + '0');
		_putchar(q[r] + '0');

		if ((2772 - s) - '0' < 78)
		{
			t = 2772 - s - '0';
			s += t;
			_putchar(t + '0');
			break;
		}
	}
	return (0);
}
