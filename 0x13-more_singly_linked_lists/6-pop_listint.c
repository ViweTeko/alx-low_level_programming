#include "lists.h"

/**
 * pop_listint - deletes head node
 * @head: beginning of node
 *
 * Return: head or 0
 */

int pop_listint(listint_t **head)
{
	listint_t *a;
	int z;

	if (!head || !*head)
		return (0);
	z = (*head)->n;
	a = (*head)->next;
	free(*head);
	*head = a;

	return (z);
}
