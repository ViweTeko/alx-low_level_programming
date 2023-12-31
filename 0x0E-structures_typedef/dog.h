#ifndef DOG_H
#define DOG_H

/**
 * struct dog - new dog object
 * @name: dogs name
 * @owner: owners name
 * @age: dogs age
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_cpy(char *dest, char *src);
int _len(char *a);

#endif
