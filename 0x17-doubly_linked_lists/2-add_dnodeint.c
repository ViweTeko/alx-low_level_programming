#include "lists.h"

/**
 * add_dnodeint - Adds new node at beginning of dlistint_t list.
 * @head: A pointer to the head of the dlistint_t list.
 * @n: The int for node
 *
 * Return: NULL or new
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	if (*head != NULL)
		(*head)->prev = new;

	*head = new;
	return (new);
}
