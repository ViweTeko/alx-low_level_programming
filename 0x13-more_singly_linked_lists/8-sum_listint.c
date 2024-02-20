#include "lists.h"

/**
 * sum_listint - returns sum of all data in list
 * @head: beginning of list
 *
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum;

	for (sum = 0; head != NULL; ++sum)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
