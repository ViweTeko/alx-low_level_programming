#include <stdlib.h>
#include "lists.h"

/**
 * add_node - adds a node on the list
 * @head: the head node
 * @str: the duplicate
 *
 * Return: str or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *viwe;
	unsigned int length;

	viwe = malloc(sizeof(list_t));
	if (viwe == NULL)
		return (NULL);
	if (str == NULL)
		return (0);

	length = 0;
	while (str[length] != '\0')
		length++;
	viwe->str = strdup(str);
	viwe->len = length(str);
	viwe->next = *head;

	*head = viwe;

	return (*head);
}
