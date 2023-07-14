#include <stdio.h>

/**
 * main - displays lower case alphabet in reverse order
 *
 * Return: 0
 */

int main(void)
{
	char wol;

	for (wol = 'z'; wol >= 'a'; wol--)
	{
		putchar(wol);
	}

	putchar('\n');

	return (0);
}
