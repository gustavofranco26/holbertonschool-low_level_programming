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
	int *ptr;
	unsigned int ui;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	ui = 0;
	while (ui < nmemb * size)
	{
		ptr[ui] = 0;
		ui++;
	}
	return (ptr);
}
