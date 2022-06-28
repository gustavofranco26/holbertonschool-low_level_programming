#include <stdlib.h>
#include "main.h"

/**
 *_strdup - returns a pointer to a newly allocated space in memory.
 *@str: string to copy
 *Return: Always
 */
char *_strdup(char *str)
{
	char *ptr;
	int i;
	int n = 0;

	if (str == NULL)
		return (NULL);
	
	for (i = 0; str[i]; i++)
		n++;

	ptr = malloc(sizeof(char) * (n + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		ptr[i] = str[i];

	ptr[n] = '\0';

	return (ptr);
}
