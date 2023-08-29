#include "lists.h"

/**
 * free_listint - frees list
 * @head: beginning of list
 */

void free_listint(listint_t *head)
{
	listint_t *a;

	while (head != NULL)
	{
		a = head->next;
		free(head);
		head = a;
	}
}
