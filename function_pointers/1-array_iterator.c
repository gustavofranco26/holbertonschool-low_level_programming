#include "function_pointers.h"

/**
 * array_iterator - A function that executes a function given as a parameter
 * @array: Array of the integers
 * @size: Size of the array
 * @action: function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
