#include "main.h"

/**
 *swap_int - Check that swaps the values of two integers
 *@a: character1
 *@b: character2
 *Return: Always 0 (Sucess).
 */

void swap_int(int *a, int *b)
{
	int swapp;

	swapp = *a;
	swapp = *b;

	*a = swapp;
	*b = swapp;
}
