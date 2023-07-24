#include "main.h"

/**
 * _strcpy - copies the string
 *
 * @dest: the destination
 * @src: the source
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int y = 0, z;

	for (z = 0; src[z] != '\0'; ++z)
	{
		dest[y] = src[z];
		++y;
	}
	dest[y] = '\0';

	return (dest);
}
