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
	return (hash_djb2(key) % size);
}
