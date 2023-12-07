#include "lists.h"

/**
 * sum_dlistint - sums the values of all the nodes in a dlistint_t list
 * @head: pointer of list
 * Return: 0
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;
	int sum = 0;

	tmp = head;
	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
