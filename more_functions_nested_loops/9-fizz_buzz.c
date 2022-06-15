#include "main.h"
#include <stdio.h>
/**
 *main - Prints the multiples 3, 5 and 15 with fizzbuzz.
 *
 *Description: A function that print thw fizzbuzz.
 *Return: Always 0 (Sucess).
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
			printf("FizzBuzz");
		else if (n % 3 == 0)
			printf("Fizz");
		else if (n % 5 == 0)
			printf("Buzz");
		else
			printf("%d", n);

		if (n < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
