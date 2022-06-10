#include "main.h"
/**
 * print_alphabet_x10 - Prints 10 times the alphabet.
 * Description: print 10 times the alphabet, followed by a new line
 */
void print_alphabet_x10(void)
{
	char alphabet;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (alphabet = 'a'; alphabet  <= 'z'; alphabet++)
			_putchar(alphabet);
	_putchar('\n');
	}
}
