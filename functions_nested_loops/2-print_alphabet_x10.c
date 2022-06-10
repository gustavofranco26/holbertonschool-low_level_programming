#include "main.h"
/**
 * print_alphabet_x10 - print the alphabet 10 veces, followed by a new line
 *
 * Return: Always "0".(Accion)
 */
void print_alphabet_x10(void)
{
	int i;
	char printalphabetx10;

	for (i = 'a'; i <= 'z'; i++)
	{
		for (printalphabetx10 = 'a'; printalphabetx10 <= 'z'; printalphabetx10++)
		{
			_putchar(printalphabetx10);
		}
	}
	_putchar('\n');
}
