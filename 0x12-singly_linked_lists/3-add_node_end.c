#include "lists.h"

/**
 * add_node_end - adds node at end of list
 * @head: beginning of list
 * @str: the string
 *
 * Return: str or NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *more, *hold;
	size_t _len = 0;

	if (str == NULL)
		_len = 0;
	while (str[_len] != '\0')
		_len++;

	more = malloc(sizeof(list_t));
	if (more == NULL)
		return (NULL);
	more->str = strdup(str);
	more->len = _len;
	more->next = NULL;

	hold = *head;
	if (hold == NULL)
		*head = more;
	else
	{
		while (hold.next != NULL)
			hold = hold.next;
		hold.next = more;
	}

	return (*head);
}
