#include "main.h"
/**
 * print_alphabet - print the alphabet, followed by a new line
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
