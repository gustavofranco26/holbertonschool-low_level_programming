#include "main.h"
/**
 * print_last_digit - Print the last digit.
 *
 * @n: Character print last digit.
 *
 * Return: Value last digit.
 */
int print_last_digit(int n)
{
	int lastDigit = n % 10;

	if (lastDigit < 0)
		(lastDigit *= -1);

	_putchar(lastDigit);
	return (lastDigit);
}
