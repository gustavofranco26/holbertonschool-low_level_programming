#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 *_calloc - Write a function that allocates memory for an array.
 *@nmemb: ArgumntSize
 *@size: ArgumentSizeof
 *Return: Always
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int ui;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (ui = 0; ui < nmemb * size; ui++)
	{
		*((char *)ptr + ui) = 0;
	}
	return (ptr);
}
