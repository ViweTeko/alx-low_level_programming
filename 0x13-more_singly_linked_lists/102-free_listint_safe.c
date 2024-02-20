#include "lists.h"

/**
 * free_listint_safe - frees list safely
 * @h: beginning of list
 *
 * Return: h
 */

size_t free_listint_safe(listint_t **h)
{
	size_t a = 0;
	listint_t *curr;
	lisp *z, *y, *x;

	z= NULL;
	while (*h != NULL)
	{
		y = malloc(sizeof(lisp));
		if (y == NULL)
			exit(98);

		y->p = (void *)*h;
		y->next = z;
		z = y;

		x = z;

		while (x->next != NULL)
		{
			x = x->next;
			if (*h == x->p)
			{
				*h = NULL;
				freed(&z);
				return (a);
			}
		}
		curr = *h;
		*h = (*h)->next;
		free(curr);
		a++;
	}
	*h = NULL;
	freed(&z);

	return (a);
}
