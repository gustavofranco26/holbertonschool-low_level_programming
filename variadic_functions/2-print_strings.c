#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 *print_strings - function that prints strings, followed by a new line.
 *@n: number strings pased to the function
 *@separator: string to the print
 *Return: Always
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list str;

	char *ptr;

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		ptr = va_arg(str, char *);

		if (ptr == NULL)
			printf("(nil)");

		else
			printf("%s", ptr);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(str);
}
