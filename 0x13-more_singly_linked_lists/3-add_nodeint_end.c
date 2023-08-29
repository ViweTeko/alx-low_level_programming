#include "lists.h"

/**
 * add_nodeint_end - add new node at end of the list
 * @head: beginning of node
 * @n: number of nodes
 *
 * Return: n
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *a, *b;

	if (head == NULL)
		return (NULL);

	a = malloc(sizeof(listint_t));
	if (a == NULLL)
		return (NULL);
	a->n = n;
	a->next = NULL;
	b = *head;

	if (b == NULL)
	{
		*head = a;
		return (a);
	}
	while (b->next != NULL)
		b = b->next;
	b->next = a;

	return (a);
}
