#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98.
 *
 * @n: numero a utilizar
 *
 */
void print_to_98(int n)
{
	int i;

	for (i = n ; i < 98; i++)
		printf("%i\n", i);

	for (i = n ; i > 98; i--)
		printf("%i\n", i);
	printf("%i\n", i);
}
