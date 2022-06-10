#include "main.h"
/**
 * main - check the code
 *
 *print _alphabet - print the alphabet, folloewd by a new line
 *
 * Return: Always "0".(Accion)
 */
void print_alphabet(void)
{
	char abc;

	for (abc = 'a'; abc <= 'z'; abc++)
	{
		_putchar(abc);
	}
	_putchar('\n');
}
