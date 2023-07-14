#include <stdio.h>

/**
 * main - prints the alphabet without e and q
 *
 * Return: 0
 */

int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	{
		if (low == 'e' || low == 'q')
		{
			continue;
		}

		putchar(low);
	}

	putchar('\n');

	return (0);
}
