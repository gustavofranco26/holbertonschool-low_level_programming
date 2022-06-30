#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 *array_range - a function that creates an array of integers.
 *@max: Argumnt int1
 *@min: Argumnt int2
 *Return: Always
 */
int *array_range(int min, int max)
{
	int arr;
	int *ptr;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * (max - min + 1));

	if (ptr == NULL)
		return (NULL);

	arr = 0;

	while (min <= max)
	{
		ptr[arr] = min;
		min++;
		arr++;
	}

	return (ptr);
}
