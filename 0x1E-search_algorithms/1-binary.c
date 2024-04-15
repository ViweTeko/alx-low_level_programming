#include "search_algos.h"

/**
 * binary_search - algorithmic binary searching
 * @arr: pointer to array
 * @size: number of arrays
 * @val: value to search
 *
 * Return: index or -1
 */
int binary_search(int *arr, size_t size, int val)
{
	size_t first, last, m;

	if (arr == NULL)
		return (-1);

	for (first = 0, last = size - 1; first <= last;)
	{
		printf("Searching in array: ");
		for (m = first; m < last; m++)
			printf("%d, ", arr[m]);
		printf("%d\n", arr[m]);

		m = first + (last - first) / 2;
		if (arr[m] == val)
			return (m);
		if (arr[m]> val)
			last = m - 1;
		else
			first = m + 1;
	}
	return (-1);
}
