#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <math.h>

/**
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
		int n;
		size_t index;
		struct listint_s *next;
} listint_t;

/**
 * struct skiplist_s - Singly linked list with an express lane
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 * @express: Pointer to the next node in the express lane
 *
 * Description: singly linked list node structure with an express lane
 */
typedef struct skiplist_s
{
	int n;
	size_t index;
	struct skiplist_s *next;
	struct skiplist_s *express;
} skiplist_t;

int binary_search(int *arr, size_t size, int val);
int linear_search(int *arr, size_t size, int val);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *arr, size_t size, int val);
int exponential_search(int *arr, size_t size, int val);
int advanced_binary(int *arr, size_t size, int val);
listint_t *jump_list(listint_t *list, size_t size, int val);
skiplist_t *linear_skip(skiplist_t *list, int val);

#endif
