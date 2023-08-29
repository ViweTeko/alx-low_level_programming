#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index of list
 * @head: beginning of list
 * @index: place to be delteted
 * @n: number of nodes
 *
 * Return: index or NULL
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *a, *b;
	unsigned int c;

	if (head == NULL || b == NULL)
		return (NULL);

	b = malloc(sizeof(listint_t));
	b->n = n;
	b->next = NULL;
	if (index == 0)
	{
		b->next = *head;
		*head = b;
		return (*head);
	}
	b->next = (*head)->next;
	a = *head;
	for (c = 0; c < index; ++c)
	{
		a = a->next;
		if (a == NULL)
		{
			free(b);
			return (NULL);
		}
		b->next = a->next;
		if (c != index - 1 && b->next == NULL)
		{
			free(b);
			return (NULL);
		}
	}
	b->next = a->next;
	a->next = b;
	return (b);
}
