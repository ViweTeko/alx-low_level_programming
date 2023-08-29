#include "lists.h"

/**
 * listint_len - returns number of  nodes
 * @h: nodes
 *
 * Return: h
 */

size_t listint_len(const listint_t *h)
{
	size_t a;

	if (h == NULL)
		return (0);
	for (a = 0; h != NULL; ++a)
		h = h->next;
	return (a);
}
