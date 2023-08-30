#include "lists.h"

/**
 * free_listint_safe - frees list safely
 * @h: beginning of list
 *
 * Return: h
 */

size_t free_listint_ssafe(listint_t **h)
{
	size_t a;
	listint_t *b;
	int c;

	if (h == NULL || *h == NULL)
		return (0);
	for (a = 0; *h != NULL; ++a)
	{
		c = *h - (*h)->next;
		if (c > 0)
		{
			b = (*h)->next;
			free(*h);
			*h = b;
		}
		else
		{
			free(*h);
			*h = NULL;
			break;
		}
	}
	*h = NULL;
	return (a);
}
