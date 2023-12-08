#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to list
 * @idx: index of node
 * @n: value of new node
 *
 * Return: address of node or NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *tmp;
	unsigned int a;

	if (h == NULL)
		return (NULL);
	tmp = *h;
	a = 0;
	if (idx == 0)
	{
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = *h;
		new->prev = NULL;
		if (*h != NULL)
			(*h)->prev = new;
		*h = new;
		return (new);
	}
	while (tmp != NULL)
	{
		if (a == idx - 1)
		{
			new = malloc(sizeof(dlistint_t));
			if (new == NULL)
				return (NULL);
			new->n = n;
			new->next = tmp->next;
			new->prev = tmp;
			tmp->next = new;
			if (new->next != NULL)
				new->next->prev = new;
			return (new);
		}
		tmp = tmp->next;
		a++;
	}
	return (NULL);
}
