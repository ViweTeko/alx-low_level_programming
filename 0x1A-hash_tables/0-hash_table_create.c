#include "hash_tables.h"

/**
 * hash_table_create - function that creates hash table
 * @size: size of hash
 *
 * Return: hash
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *created = NULL;

	created = malloc(sizeof(hash_table_t));

	if (size == 0)
		return (NULL);
	if (!created)
		return (NULL);
	created->size = size;
	created->array = calloc((size_t)size, sizeof(hash_node_t *));

	if (created->array == NULL)
		return (NULL);

	return (created);
}
