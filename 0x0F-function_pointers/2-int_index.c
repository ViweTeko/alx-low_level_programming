#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: the array
 * @size: size of the element in array
 * @cmp: pointer
 *
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int y;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (y = 0; y < size; ++y)
	{
		if (cmp(array[y]))
			return (y);
	}

	return (-1);
}
