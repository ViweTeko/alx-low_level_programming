#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints a list of all elements in list
 * @h: number of nodes
 *
 * Return: h or (nil)
 */

size_t print_list(const list_t *h)
{
	list_s i = 0;

	while (i != NULL)
	{
		if (!i->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
