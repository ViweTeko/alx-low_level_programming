#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees allocated memory for struct dog
 * @d: struct to free
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	else if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
