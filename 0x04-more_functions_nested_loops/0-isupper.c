#include "main.h"

/**
 * _isupper - writes a function that checks UPPER CASE
 *
 * @UP: the character
 *
 * Return: 1 if UPPERCASE, 0 otherwise
 */

int _isupper(int UP)
{
	if (UP >= 'A' && UP <= 'Z')
		return (1);
	else
		return (0);
}
