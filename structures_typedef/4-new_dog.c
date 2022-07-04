#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 *new_dog - Write a function that creates a new dog.
 *@name: Name by to Validate
 *@age: Age by to Validate
 *@owner: Owner by to Validate
 *Return: Always
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog = malloc(sizeof(dog_t));

	if (newDog == NULL)
		return (NULL);

	newDog->name = malloc((strlen(name) + 1) * sizeof(char));

	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}

	newDog->owner = malloc((strlen(owner) + 1) * sizeof(char));

	if (newDog->owner == NULL)
	{
		free(newDog);
		free(newDog->name);
		return (NULL);
	}

	strcpy(newDog->name, name);
	newDog->age = age;
	strcpy(newDog->owner, owner);

	return (newDog);
}
