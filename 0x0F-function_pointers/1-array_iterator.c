#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes a function given as a parameter
 * @array: the array
 * @size: size of the array
 * @action: pinter to the function
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int z;

	if (array == NULL || action == NULL)
		return;

	for (z = 0; z < size; ++z)
		action(array[z]);
}
