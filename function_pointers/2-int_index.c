#include "function_pointers.h"

/**
 *int_index - A  function that searches for an integer.
 *@array: Array the ints.
 *@size: The size of the array.
 *@cmp: A pointer to compare values into the function
 *Return: Always
 */


int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
