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
	int _len;

	viwe = malloc(sizeof(list_t));
	if (viwe == NULL)
		return (NULL);
	if (str == NULL)
		return (0);

	_len = 0;
	while (str[_len] != '\0')
		_len++;
	viwe.str = strdup(str);
	viwe.len = _len(str);
	viwe.next = *head;

	*head = new;

	return (new);
}
