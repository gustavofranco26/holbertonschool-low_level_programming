#ifndef DOGHEADER
#define DOGHEADER
#include <stdio.h>

/**
 * struct dog - Verify the task
 *@name: Member1
 *@age: Member2
 *@owner: MEmber3
 *Return: Always (0).
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
#endif
