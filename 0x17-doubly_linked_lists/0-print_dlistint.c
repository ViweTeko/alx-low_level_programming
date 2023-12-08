#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 * @h: The head of the list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t a = 0;
	const dlistint_t *b = h;

	while (b != NULL)
	{
		printf("%d\n", b->n);
		b = b->next;
		a++;
	}
	return (a);
}
