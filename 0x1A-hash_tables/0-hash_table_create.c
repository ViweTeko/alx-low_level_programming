#include "hash_tables.h"

/**
 * hash_table_create - function that creates hash table
 * @size: size of hash
 *
 * Return: hash
 */

hash_table_t *hash_table_create(insigned long int size)
{
	hash_table_t *created;
	unsigned long int a;

	created = malloc(sizeof(hash_table_t));

	if (created == NULL)
		return (NULL);

	created->size = size;
	created->array = malloc(sizeof(hash_node_t *) * size);

	if (created->array == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
		created->array[a] = NULL;

	return (created);
}
