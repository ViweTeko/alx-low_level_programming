#include "hash_tables.h"

/**
 * key_index - creation of an index key
 * @key: key of index
 * @size: size of hash
 *
 * Return: Key index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int in;

	if (key == NULL || size == 0)
		return (0);
	in = hash_djb2(key) % size;

	return (in);
}
