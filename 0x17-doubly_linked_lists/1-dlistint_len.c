#include "lists.h"

/**
 * dlistint_len - Returns number of elements in list.
 * @h: head of list.
 *
 * Return: number of elements in the list.
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t a = 0;
	const dlistint_t *tmp = h;

	while (tmp != NULL)
	{
		tmp = tmp->next;
		a++;
	}
	return (a);
}
