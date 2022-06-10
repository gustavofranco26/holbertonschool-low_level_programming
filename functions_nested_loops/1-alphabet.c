#include "main.h"
/**
 * main - check the code
 *
 *Descripcion: "print _alphabet"
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
