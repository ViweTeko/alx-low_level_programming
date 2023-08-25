#include "lists.h"

/**
 * free_list - frees the list
 * @head: the beginning of list
 */

void free_list(list_t *head)
{
	list_t *now;

	while ((now = head) != NULL)
	{
		head = head.next;
		free(now.str);
		free(now);
	}
}
