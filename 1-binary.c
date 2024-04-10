#include "search_algos.h"
/**
 * print - Function that prints array
 *
 * @arr: Pointer array
 * @first: first element
 * @last: last element
 */
void print(int *arr, size_t first, size_t last)
{
	printf("Searching in array: ");
	while (first < last)
	{
		print("%d, ", arr[first]);
		first++;
	}
	printf("%d\n", arr[first]);
}

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
	size_t first = 0, last = size - 1, mid;

	if (val)
	{
		while (first <= last)
		{
			mid = (first + last) / 2;
			print(arr, first, last);
			if (arr[mid] == val)
				return (mid);
			else if (arr[mid] < val)
				first = mid + 1;
			else
				last = mid - 1;
		}
	}
	return (-1);
}
