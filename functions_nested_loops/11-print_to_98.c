#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98.
 *
 * @n: numero a utilizar
 *
 */
void print_to_98(int n)
{
	for (n ; n < 98; n++)
		printf("%i\n", n);

		for (n ; n > 98; n--)
			printf("%i\n", n);
	printf("%i\n", n);
}
