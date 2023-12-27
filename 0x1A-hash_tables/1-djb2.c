#include "hash_tables.h"

/**
 * has_djb2 - Hash function implementing djb2 algorithm
 * @s: String
 *
 * Return: hash
 */

unsigned long int hash_djb2(const unsigned char *s)
{
	int a;
	unsigned long int b;

	b = 5381;
	while ((a = *s++))
	{
		b = ((b << 5) + b) + a;
	}

	return (b);
}
