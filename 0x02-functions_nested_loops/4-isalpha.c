#include "main.c"

/**
 * _isalpha - checks for alphabet
 *
 * @c: checks the input of alphabet or not
 *
 * Return: 1 if c is alphabet, 0 if not
 */

int _isalpha(int c)
{
	return (c >= 'a' && c <= 'Z');
}
