#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creating a new dog
 *
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: 0 or NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int n = _len(name), o = _len(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (n + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (o + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_cpy(dog->name, name);
	_cpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}

/**
 * _len - string length
 *
 * @a: the string
 *
 * Return: a
 */
int _len(char *a)
{
	int b = 0;

	while (a[b] != '\0')
		++b;
	return (b);
}

/**
 * _cpy - cpoies string
 *
 * @dest: destination string
 * @src: the string to be copied
 *
 * Return: dest
 */
char *_cpy(char *dest, char *src)
{
	int c = 0, d;

	while (src[c] != '\0')
		++c;

	for (d = 0; d < c; ++d)
		dest[d] = src[d];

	dest[d] = '\0';

	return (dest);
}
