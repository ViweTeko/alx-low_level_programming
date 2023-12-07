#include "lists.h"
/**
 * get_dnodeint_at_index - gets the nth node of a doubly linked list
 * @head: pointer to list
 * @index: index of 1node
 *
 * Return: address node, or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int a;

	tmp = head;
	a = 0;
	if (head == NULL)
		return (NULL);
	while (tmp != NULL)
	{
	if (a == index)
		return (tmp);
	tmp = tmp->next;
	a++;
	}
	return (NULL);
}
