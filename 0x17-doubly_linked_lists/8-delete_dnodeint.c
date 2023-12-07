#include "lists.h"

/**
 * delete_dnodeint_at_index- deletes the node at given index
 * @head: pointer to list
 * @index: index of node to delete
 * Return: 1 (success), -1 (failed)
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	dlistint_t *tmp2;
	unsigned int a;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(tmp);
		return (1);
	}
	tmp = *head;
	a = 0;
	while (tmp != NULL)
	{
		if (i == index - 1)
		{
			tmp2 = tmp->next;
			tmp->next = tmp->next->next;
			if (tmp->next != NULL)
				tmp->next->prev = tmp;
			free(tmp2);
			return (1);
		}
		tmp = tmp->next;
		a++;
	}

	return (1);
}
