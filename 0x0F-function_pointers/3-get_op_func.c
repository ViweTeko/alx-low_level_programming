#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - gets the function of operator
 * @s: Operator as an arg
 *
 * Return: s
 */

int (*get_op_func(char *s))(int, int)
{
	op_t op[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int p = 0;

	while (op[p].op != NULL && *(op[p].op) != *s)
		++p;

	return (op[p].f);
}
