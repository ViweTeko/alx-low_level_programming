#include "lists.h"

/**
 * insert_nodeint_at_index - inserts node at given position
 * @head: beginning of list
 * @idx: index
 * @n: number of elements
 *
 * Return: idx or NULL
 */

listint_t *insert_node_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *a, *b;
	unsigned int c;

	b = *head;
	if ((*head == NULL && idx != NULL) || a == NULL)
		return (NULL);
	a = malloc(sizeof(listint_t));
	a->n = n;

	for (c = 0; head != NULL && c < idx - 1; ++c)
	{
		b = b->next;
		if (b == NULL)
			return (NULL);
	}
	if (b->next)
	{
		a->next = b->next;
		b->next = a;
	}
	else if (isx == 0)
	{
		a->next = *head;
		*head = a;
	}
	else
	{
		a->next = NULL;
		b->next = a;
	}

	return (a);
}
