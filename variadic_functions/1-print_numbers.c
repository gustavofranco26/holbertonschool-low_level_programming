#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 *print_numbers - function that prints numbers, followed by a new line.
 *@n: number int pased to the function
 *@separator: string to the print
 *Return: Always
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list num;

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(num, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");
	va_end(num);
}
