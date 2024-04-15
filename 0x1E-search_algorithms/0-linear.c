#include "search_algos.h"

/**
 * linear_search - a function searches linear
 *
 * @arr: pointer to first element
 * @size: num of elements
 * @val: value to search
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
