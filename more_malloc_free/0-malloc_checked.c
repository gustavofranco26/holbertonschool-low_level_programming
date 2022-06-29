#include <stdlib.h>
#include "main.h"

/**
 *malloc_checked - Write a function that allocates memory using malloc.
 *@b: Argumnt to allocated.
 *Return: Always
 */
void *malloc_checked(unsigned int b)
{
	void(*ptr) = malloc(b);

	if (ptr == Null)
		exit(98);
	return (ptr);
}
