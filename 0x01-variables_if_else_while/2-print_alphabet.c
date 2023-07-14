#include <stdio.h>

/**
 * main - printing lower case alphabets using putchar
 *
 * Return: 0
 */

int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	{
		putchar(low);
		low++;
	}

	putchar('\n');

	return (0);
}
