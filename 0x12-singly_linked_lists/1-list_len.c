#include <stdlib.h>
#include "lists.h"

/**
 * list_len - lists amounts of nodes in list
 * @h: node
 *
 * Return: h
 */

size_t list_len(const list_t *h)
{
	size_t i;

	for (i = 0; h != NULL; ++i)
		h = h->next;

	return (i);
}
