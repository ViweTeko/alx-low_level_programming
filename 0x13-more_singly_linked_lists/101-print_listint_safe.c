#include "lists.h"

/**
 * print_listint_safe - prints a list safely
 * @head: beginning of list
 *
 * Return: head
 */

size_t print_listint_safe(const listint_t *head)
{
	lisp *z, *y, *x;
	size_t a = 0;

	z = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(lisp));

		if (new == NULL)
			exit(98);
		new->p = (void *)head;
		new->next = z;
		z = new;

		x = z;
		while (x->next != NULL)
		{
			x = x->next;
			if (head == x->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				freed(&z);
				return (a);
			}
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		a++;
	}
	freed(&a);
	return (z);
}
