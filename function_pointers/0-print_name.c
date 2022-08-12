#include "function_pointers.h"

/**
 * print_name - A function that prints a name.
 * @name: Variable pointing to a character
 * @f: Function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	f(name);
}
