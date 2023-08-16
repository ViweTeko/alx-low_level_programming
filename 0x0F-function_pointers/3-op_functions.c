#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - sum of two numbers
 * @a: number one
 * @b: number two
 *
 * Return: a plus b
 */

int op_add(int a, int b)
{
	return ( a + b);
}

/**
 * op_sub - difference of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: a minus b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - product of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: a times b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: a divide by b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - remainder of the div two numbers
 * @a: number one
 * @b: number two
 *
 * Return: a mod b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
