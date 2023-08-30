#include "lists.h"

/**
 * free_listint2 - frees list and makes head NULL
 * @head: beginning of list
 */

void free_listint2(listint_t **head)
{
	listint_t *a;

	if (head == NULL)
		return;
	while (*head)
	{
		a = (*head)->next;
		free(*head);
		*head = a;
	}
	*head = NULL;
}
