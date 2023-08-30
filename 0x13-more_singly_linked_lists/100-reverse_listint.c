#include "lists.h"

/**
 * reverse_listint - reverses a list
 * @head: beginning of list
 *
 * Return: head
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *a = NULL, *b = NULL;

	while (*head != NULL)
	{
		b = (*head)->next;
		(*head)->next = a;
		a = *head;
		*head = b;
	}
	*head = a;
	return (*head);
}
