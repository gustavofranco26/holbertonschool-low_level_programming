#include <stdlib.h>
#include "main.h"

/**
 *create_array - create a array of chars.
 *@size: sizearray
 *@c: Argumenchar
 *Return: Always
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ptr = malloc(size * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i <= size; i++)
		ptr[i] = c;

	return (ptr);
}
