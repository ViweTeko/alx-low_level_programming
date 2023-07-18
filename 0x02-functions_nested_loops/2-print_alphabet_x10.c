#include "main.h"

/**
 * print_alphabet_x10 - printing lower case alphabet ten times
 */

void print_alphabet_x10(void)
{
	char low;
	int no;

	for (no = 0; no <= 9; ++no)
	{
		for (low = 'a'; low <= 'z'; ++low)
		{
			putchar(low);
		}
		putchar('\n');
	}
}
