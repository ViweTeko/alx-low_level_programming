#include "lists.h"

/**
 * add_nodeint - adds new node at beginning of list
 * @head: beginning node
 * @n: new node
 *
 * Return: n
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *a;

	if (head == NULL)
		return (NULL);

	a = malloc(sizeof(listint_t));
	if (a == NULL)
		return (NULL);

	a->n = n;
	a->next = *head;
	*head = a;

	return (a);
}
