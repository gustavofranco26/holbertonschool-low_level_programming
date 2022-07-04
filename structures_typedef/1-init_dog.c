#include <stdlib.h>
#include "dog.h"

/**
 *init_dog - a function that initialize a variable
 *@d:Dog to be inicialized
 *@name: namedog
 *@age: agedog
 *@owner: ownerdog
 *Return: Always
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
