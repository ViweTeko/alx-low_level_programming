#include "main.h"
#include "2-strlen_recursion.c"

/**
 * pcheck - checks is string is palindrome
 *
 * @s: string
 * @t: size
 * @u: counter
 *
 * Return: 1 if palindrome, 0 if not
 */

int pcheck(char *s, int t, int u)
{
	if (t <= u)
		return (1);

	if (s[u] != s[t])
		return (0);

	return (pcheck(s, a - 1, u + 1));
}

/**
 * is_palindrome - checks if the string is a palindrome
 *
 * @s: the string
 *
 * Return: 1 palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	return (pcheck(s, _strlen_recursion(s) - 1, 0));
}
