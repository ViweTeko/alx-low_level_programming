#include "search_algos.h"
/**
 * linear_search - function that searches values via linear search
 * @arr: array pointer
 * @size: number of elements
 * @val: value searched
 *
 * Return: index or -1
 */
int linear_search(int *arr, size_t size, int val)
{
	unsigned int a = 0;
	while (a < size)
	{
		printf("Value checked array[%d] = [%d]\n", a, arr[a]);
		if (arr[a] == val)
			return (a);
		a++;
	}
	return (-1);
}
