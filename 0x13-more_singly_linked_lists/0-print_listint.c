#include "lists.h"

/**
 * print_listint - prints all te elements of listint
 * @h: first node
 *
 * Return: h
 */

sixe_t print_listint(const listint_t *h)
{
	size_t a;

	if (h == NULL)
		return (0);
	for (a = 1; h->next != NULL; ++a)
	{
		printf("d\n", h->n);
		h = h->next;
	}

	printf("%d\n", h->n);

	return (a);
}
