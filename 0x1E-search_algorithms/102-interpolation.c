#include "search_algos.h"

/**
 * interpolation_search - Searches array using interpolation search
 * @arr: First element of array
 * @size: number of elements in array
 * @val: value to search
 * Return: -1 or index
 */
int interpolation_search(int *arr, size_t size, int val)
{
	size_t a, b, c;

	if (arr == NULL)
		return (-1);

	for (b = 0, c = size - 1; c >= 1;)
	{
		a = b + (((double)(c - 1) / (arr[c] - arr[b])) *
			       	(val - arr[b]));
		if (a < size)
			printf("Value checked array[%ld] = [%d]\n", a, arr[a]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", a);
			break;
		}
		if (arr[a] == val)
			return (a);
		if (arr[a] > val)
			c = a - 1;
		else
			b = a + 1;
	}

	return (-1);
