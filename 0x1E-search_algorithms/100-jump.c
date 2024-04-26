#include "search_algos.h"

/**
 * jump_search - Searches for value using jump search
 * @arr: first element of array
 * @size: number of elements
 * @val: value to search
 * Return: -1 or index
 */
int jump_search(int *arr, size_t size, int val)
{
	size_t a, jump, b;

	if (arr == NULL || size == 0)
		return (-1);
	b = sqrt(size);

	for (a = jump = 0; jump < size && arr[jump] < val;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, arr[jump]);
		a = jump;
		jump += b;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", a, arr[jump]);
	jump = jump < size - 1 ? jump : size - 1;
	for (; a < jump && arr[a] < val; a++)
		printf("Value checked array[%ld] = [%d]\n", a, arr[a]);
	printf("Value checked array[%ld] = [%d]\n", a, arr[a]);

	return (arr[a] == value ? (int)a : -1);
