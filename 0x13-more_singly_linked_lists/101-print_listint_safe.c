#include "lists.h"

/**
 * print_listint_safe - prints a list safely
 * @head: beginning of list
 *
 * Return: head
 */

size_t print_listint_safe(const listint_t *head)
{
	long int z;
	size_t a;

	for (a = 0; head != NULL; ++a)
	{
		z = head - head->next;
		printf("[%p] %d\n", (void *)head, head->n);
		if (z > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}
	return (z);
}

