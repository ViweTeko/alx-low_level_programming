#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index of list
 * @head: beginning of list
 * @index: place to be deleted
 *
 * Return: 1 (Success) or -1( NULL)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *a, *b;
	unsigned int c;

	b = *head;
	if (head == NULL || b == NULL)
		return (-1);
	if (index == 0)
	{
		a = b->next;
		free(b);
		*head = a;
		return (1);
	}
	for (c = 0; c < index; ++c)
	{
		if (b == NULL)
			return (-1);
		a = b;
		b = b->next;
	}
	b->next = a->next;
	free(b);
	if (index == 0)
		head = &a;
	return (1);
}
