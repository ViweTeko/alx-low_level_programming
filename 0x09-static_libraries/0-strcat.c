#include "main.h"

/**
 * _strcat - appends the src string to dest string
 *
 * @dest: the string that will include appended string
 * @src: the string that will append to dest
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int a, b = 0;

	while (dest[b] != '\0')
		++b;

	for (a = 0; src[a] != '\0'; ++a)
	{
		dest[b] = src[a];
		++b;
	}

	dest[b] = src[a];

	return (dest);
}
