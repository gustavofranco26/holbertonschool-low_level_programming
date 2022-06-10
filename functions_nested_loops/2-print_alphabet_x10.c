#include "main.h"
/**
 * main - print-alphabet_10
 * Description: print 10 times the alphabet, followed by a new line
 * Return: Always "0".(Accion)
 */
void print_alphabet_x10(void)
{
	char alphabet;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (alphabet = 'a';alphabet  <= 'z';alphabet ++)
			_putchar(alphabet);
	_putchar('\n');
	}
}
