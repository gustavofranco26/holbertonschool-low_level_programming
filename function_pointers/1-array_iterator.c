#include <function_pointers.h>

/**
 *array_iterator - A function that executes a function given as a parameter
 *@array: The array
 *@size: Size of array 
 *@action: A pointer to the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && size > 0 && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
